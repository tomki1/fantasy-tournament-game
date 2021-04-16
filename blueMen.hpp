/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for blueMen.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_BLUEMEN_HPP
#define CS162PROJECT3_BLUEMEN_HPP

#include"character.hpp"
#include <string>

using std::string;

class BlueMen: public Character { // derived class of the character class

private:
public:
    BlueMen(string name); // default constructor
    ~BlueMen(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
    void recover(); // recovery function
    string getCharType(); // get character type
};


#endif