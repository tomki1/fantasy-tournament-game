/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The barbarian class holds the barbarian functions. It is a derived class of the character class.
*********************************************************************/

#include "barbarian.hpp"

// default constructor
Barbarian::Barbarian(string name) : Character(name){

    this->name = name;
    armor = 0;
    strengthPoints = 12;

}

// destructor
Barbarian::~Barbarian() {

}

// attack function
int Barbarian::attackMove() {
    attack = attackRoll(2, 6);

    return attack;

}

// defense function
int Barbarian::defenseMove(int damageTaken) {
    int roll = defenseRoll(2, 6);

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
void Barbarian::recover() {
    strengthPoints += 6;
    if (strengthPoints > 12) {
        strengthPoints = 12;
    }

}

// get character type
string Barbarian::getCharType() {
    type = "Barbarian";
    return type;
}


