/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: functions for the characterNode struct.
*********************************************************************/
#include "characterNode.hpp"


CharacterNode::CharacterNode(int creature, string name) {

    if (creature == 1) {
        cout << "You have selected vampire" << endl;

        character = new Vampire(name);
      }
    else if (creature == 2) {
        cout << "You have selected Barbarian" << endl;

        character = new Barbarian(name);
      }
    else if (creature == 3) {
        cout << "You have selected Blue Men" << endl;

        character = new BlueMen(name);
      }
    else if (creature == 4) {
        cout << "You have selected Medusa" << endl;

        character = new Medusa(name);
     }
    else {
        cout << "You have selected Harry Potter" << endl;

        character = new HarryPotter(name);
    }

    prev = NULL;
    next = NULL;
}

// destructor
CharacterNode::~CharacterNode() {
    delete character;

}
