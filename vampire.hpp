/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for vampire.hpp.
*********************************************************************/

#ifndef CS162PROJECT3_VAMPIRE_HPP
#define CS162PROJECT3_VAMPIRE_HPP

#include"character.hpp"
#include <string>

using std::string;

class Vampire: public Character { // derived class of the character class

private:
public:
    Vampire(string name); // default constructor
    ~Vampire(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
    void recover(); // recovery function
    string getCharType(); // get character type
};


#endif