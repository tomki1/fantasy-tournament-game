/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for harryPotter.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_HARRYPOTTER_HPP
#define CS162PROJECT3_HARRYPOTTER_HPP

#include"character.hpp"
#include <string>

using std::string;


class HarryPotter: public Character { // derived class of the character class

private:
    bool abilityHogwarts; // Harry's special ability which gives him 20 strength points in second life
public:
    HarryPotter(string name); // default constructor
    ~HarryPotter(); // destructor
    int attackMove(); // attack function
    int defenseMove(int damageTaken); // defense function
    void recover(); // recovery function
    string getCharType(); // get character type
};


#endif