/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for gamePlay.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_GAMEPLAY_HPP
#define CS162PROJECT3_GAMEPLAY_HPP

#include"inputValidation.hpp"
#include"menu.hpp"
#include"character.hpp"
#include"vampire.hpp"
#include"barbarian.hpp"
#include"blueMen.hpp"
#include"medusa.hpp"
#include"harryPotter.hpp"
#include"lineup.hpp"
#include"characterNode.hpp"

class GamePlay {

private:
    int characterCount;
    Lineup *loserList;
    Lineup *team1;
    Lineup *team2;


//    Character *monster1 = NULL; // character object for the first monster
//    Character *monster2 = NULL; // character object for the second monster

public:
//    GamePlay(int character1, int character2); // constructor
    GamePlay(int characterCount); // default constructor that takes in number of characters
    ~GamePlay(); // destructor
    void createTeam1(int characterCount); // create team 1 lineup
    void createTeam2(int characterCount); // create team 2 lineup
    void simulation(); // function that will play out the simulation

};


#endif