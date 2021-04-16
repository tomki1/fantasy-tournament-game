/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The gamePlay class holds the gamePlay functions.
*********************************************************************/

#include "gamePlay.hpp"


// default constructor to create loser list
GamePlay::GamePlay(int characterCount) {
    loserList = new Lineup;
    this->characterCount = characterCount;

}

// deallocate memory
GamePlay::~GamePlay() {
    delete team1;
    delete team2;
    delete loserList;

}

// game play simulation
void GamePlay::simulation() {

    // get the first monsters to fight for each team
    Character *monster1 = team1->getFront();
    Character *monster2 = team2->getFront();

    int roundCount = 1;
    int team1Score = 0;
    int team2Score = 0;

    // keep performing until one team doesn't have anymore creatures to battle
    while (monster1 != NULL && monster2 != NULL) {

        cout << endl;
        cout << "**Round " << roundCount << "**" << endl;

        int monster1Damage = 0;
        int monster2Damage = 0;

        cout << endl;
        cout << monster1->getCharType() << " " << monster1->getCharName() << " will be fighting " <<
            monster2->getCharType() << " " << monster2->getCharName() << endl;
        cout << endl;

        // keep performing next round as long as both monsters have more than 0 strength points
        while (monster1->getStrengthPoints() > 0 && monster2->getStrengthPoints() > 0) {

            monster1->attackMove(); // monster 1 attacks
            monster2->defenseMove(monster1->getAttack()); // monster 2 defends

            // if monster 2 still has more than 0 strength points, continue round
            if (monster2->getStrengthPoints() > 0) {
                monster2->attackMove(); // monster 2 attacks
                monster1->defenseMove(monster2->getAttack()); // monster 1 defends
            }


            // if monster 1 has 0 strength points or less, monster 1 has died
            if (monster1->getStrengthPoints() <= 0) {
                cout << monster1->getCharType() << " " << monster1->getCharName() << " has died" << endl;
                cout << monster2->getCharType() << " " << monster2->getCharName()
                     << " wins and gains some strength points back" << endl;
                monster2->recover();
                team2Score++;

                // put monster2 at back of team2 queue
                team2->addToBack(team2->removeFront());

                cout << monster2->getCharType() << " " << monster2->getCharName()
                     << " has been moved to back of team 2 queue" << endl;

                // add monster1 to front of loser list
                cout << monster1->getCharType() << " " << monster1->getCharName()
                     << " has been added to the loser list" << endl;
                loserList->addToFront(team1->removeFront());
            }

            // if monster 2 has 0 strength points or less, monster 2 has died
            if (monster2->getStrengthPoints() <= 0) {
                cout << monster2->getCharType() << " " << monster2->getCharName() << " has died" << endl;
                cout << monster1->getCharType() << " " << monster1->getCharName()
                     << " wins and gains some strength points back" << endl;
                monster1->recover();
                team1Score++;

                // put monster1 at back of team1 queue
                team1->addToBack(team1->removeFront());

                cout << monster1->getCharType() << " " << monster1->getCharName()
                     << " has been moved to back of team 1 queue" << endl;

                // add monster2 to front of loser list
                cout << monster2->getCharType() << " " << monster2->getCharName()
                     << " has been added to the loser list" << endl;
                loserList->addToFront(team2->removeFront());
            }
        }
        roundCount++; // increment round

        // get next monster for each team
        monster1 = team1->getFront();
        monster2 = team2->getFront();
}

    cout << endl;
    cout << "***Final Results***" << endl;
    cout << "Team 1 Score: " << team1Score << endl;
    cout << "Team 2 Score: " << team2Score << endl;

    if (team1Score > team2Score) {
        cout << "Team 1 wins!" << endl;
    }
    else if (team2Score > team1Score) {
        cout << "Team 2 wins!" << endl;
    }
    else {
        cout << "It is a tie!" << endl;
    }

    // ask user if they want to display the list of losers
    cout << "Do you want to see the loser list of fainted characters?" << endl;
    cout << "1. yes" << endl;
    cout << "2. no" << endl;
    int displayLoser = validateLoserList();

    if (displayLoser == 1)  {
        loserList->printList(); // print loser list
    }

    cout << endl;
    startMenu(); // show start menu again
}


// create team 1
void GamePlay::createTeam1(int characterCount) {
    Lineup *temp1 = new Lineup;

   for (int b = 0; b < characterCount; b++) {
          cout << "Character " << b + 1 << " on team 1 is ";
       int characterChoice = validate();

       cout << "Please name the character" << endl;
       string newName = validateName();
       temp1->addNewCharacter(characterChoice, newName);
   }

    team1 = temp1;
}

// create team 2
void GamePlay::createTeam2(int characterCount) {
    Lineup *temp2 = new Lineup;

    for (int a = 0; a < characterCount; a++) {
        cout << "Enter team 2 character choice:" << endl;

        cout << "Character " << a + 1 << " on team 2 is ";
        int characterChoice = validate();

        cout << "Please name the character" << endl;
        string newName = validateName();


        temp2->addNewCharacter(characterChoice, newName);
    }

    team2 = temp2;
}