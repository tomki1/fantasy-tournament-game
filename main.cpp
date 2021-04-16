/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: This program runs a Fantasy Combat Tournament where a user can select the number
 * of characters on each team.  Each round consists of a character from each team battling, and the character
 * with no health left loses and cannot battle anymore.  The winning character gains some health points and
 * is moved to the back of the queue of his team where he can battle again once it is his turn.  Game is over
 * once a team has no more characters that can battle.  The winning team is determined by which team
 * won the most rounds.
*********************************************************************/

#include <iostream>
#include<cstdlib>
#include<ctime>
#include<sstream>

#include"menu.hpp"

using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(NULL)); // used to set time for die rolls

    startMenu(); // show start menu

    return 0;
}