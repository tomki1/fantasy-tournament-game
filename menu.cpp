/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The menu class holds the menu functions.
*********************************************************************/

#include "menu.hpp"

// show start menu for game
void startMenu() {
    cout << "***Fantasy Combat Tournament Main Menu***" << endl;
    cout << "Please select whether you want to start a new game or quit the game" << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Quit Game" << endl;
    cout << "enter choice:" << endl;
    int choice = 0;
    choice = validateStart();

    if (choice == 1) {

        cout << "Enter the number of fighters for team 1" << endl;
        cout << "minimum: 1, maximum: 10" << endl;
        int fighterCount1 = 0;
        fighterCount1 = validateFighterCount();

        cout << "Enter the number of fighters for team 2" << endl;
        cout << "minimum: 1, maximum: 10" << endl;
        int fighterCount2 = 0;
        fighterCount2 = validateFighterCount();

        // call to default constructor
        GamePlay gamePlay(fighterCount1 + fighterCount2);

        cout << "Select a character to add to team 1" << endl;
        cout << "The character on team 1 gets to attack first" << endl;
        cout << "1. Vampire: 18 strength points, 1 armor, ability: Charm" << endl;
        cout << "2. Barbarian: 12 strength points, 0 armor, no ability" << endl;
        cout << "3. Blue Men: 12 strength points, 3 armor, ability: Mob" << endl;
        cout << "4. Medusa: 8 strength points, 2 armor, ability: Glare" << endl;
        cout << "5. Harry Potter: 10 strength points, 0 armor, ability: Hogwarts" << endl;

        // create teams
        gamePlay.createTeam1(fighterCount1);
        gamePlay.createTeam2(fighterCount2);

        // start game
        gamePlay.simulation();

    }
    else if (choice == 2) {
        cout << "Game is quitting. Goodbye." << endl;
    }
}