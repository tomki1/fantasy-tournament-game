/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for Barbarian.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_BARBARIAN_HPP
#define CS162PROJECT3_BARBARIAN_HPP

#include"character.hpp"
#include <string>

using std::string;

class Barbarian: public Character { // derived class of the character class

private:
public:
    Barbarian(string name); // default constructor
    ~Barbarian(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
    void recover(); // recovery function
    string getCharType(); // get character type
};


#endif