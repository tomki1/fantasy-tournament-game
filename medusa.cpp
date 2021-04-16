/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The medusa class holds the medusa functions. It is a derived class of the character class.
*********************************************************************/

#include "medusa.hpp"

// default constructor
Medusa::Medusa(string name) : Character(name) {

    this->name = name;
    armor = 3;
    strengthPoints = 8;
}

// destructor
Medusa::~Medusa() {

}

// attack function
int Medusa::attackMove() {
    attack = attackRoll(2, 6);

    // if medusa rolls 12, she kills her opponent
    if (attack == 12) {

        attack = 500;
    }
    // else return normal attack
    else {

    }
    return attack;
}

int Medusa::defenseMove(int damageTaken) {
    int roll = defenseRoll(1, 6);

    defense = roll + armor;


    // if damage is less than defense, no damage
    if (damageTaken < defense) {

    }

    // if opponent Medusa rolled a 12, character instantly dies
    else if (damageTaken == 500) {

        strengthPoints = 0;
    }

    // calculate damage
    else {
        int damage = damageTaken - defense;

        strengthPoints -= damage;
    }

   // character has remaining strength points
    if (strengthPoints > 0) {

    }

    // character has no more strength points
    else {
        strengthPoints = 0;

    }
    return strengthPoints;
}

// recovery function
void Medusa::recover() {
    strengthPoints += 4;
    if (strengthPoints > 8) {
        strengthPoints = 8;
    }

}

// get character type
string Medusa::getCharType() {
    type = "Medusa";
    return type;
}
