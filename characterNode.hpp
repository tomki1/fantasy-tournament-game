/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: characterNode contains a struct.
*********************************************************************/

#ifndef CS162PROJECT3_CHARACTERNODE_HPP
#define CS162PROJECT3_CHARACTERNODE_HPP

#include "character.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "harryPotter.hpp"
#include "medusa.hpp"
#include "vampire.hpp"

#include <iostream>
#include <string>

using std::string;

struct CharacterNode {

    Character *character; // character object
    CharacterNode *prev; // pointer to previous node
    CharacterNode *next; // pointer to next node
    CharacterNode(int creature, string name); // constructor to create new character
    ~CharacterNode(); // destructor

};


#endif