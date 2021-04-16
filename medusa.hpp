/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for medusa.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_MEDUSA_HPP
#define CS162PROJECT3_MEDUSA_HPP

#include"character.hpp"
#include <string>

using std::string;

class Medusa: public Character { // derived class of the character class

private:

public:
    Medusa(string name); // default constructor
    ~Medusa(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
    void recover(); // recovery function
    string getCharType(); // get character type
};


#endif