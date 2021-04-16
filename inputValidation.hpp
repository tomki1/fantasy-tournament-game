/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for inputValidation.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_INPUTVALIDATION_HPP
#define CS162PROJECT3_INPUTVALIDATION_HPP

#include<iostream>
#include<sstream>

using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;

int validateStart(); // input validation for start menu
int validateFighterCount(); // input validation for fighter count
int validate(); // input validation for character selection
string validateName(); // validate name of character
int validateLoserList(); // validate loser list answer

#endif