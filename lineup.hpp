/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The header file for lineup.cpp.
*********************************************************************/

#ifndef CS162PROJECT3_LINEUP_HPP
#define CS162PROJECT3_LINEUP_HPP

#include <string>
#include "character.hpp"
#include "characterNode.hpp"

using std:: string;

class Lineup {

private:
    CharacterNode *head;
    CharacterNode *tail;

public:
    Lineup(); // default constructor
    ~Lineup(); // destructor
    bool isEmpty(); // return true if queue is empty
    Character* getFront(); // get character at front of queue
    CharacterNode* removeFront(); // remove character from front
    void addNewCharacter(int creature, string name); // add character
    void addToBack(CharacterNode *node);
    void addToFront(CharacterNode *node);
    void printList();

};


#endif
