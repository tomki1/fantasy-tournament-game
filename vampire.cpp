/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The vampire class holds the vampire functions. It is a derived class of the character class.
*********************************************************************/

#include "vampire.hpp"

// default constructor
Vampire::Vampire(string name) : Character(name) {

    this->name = name;
    armor = 1;
    strengthPoints = 18;
}

// destructor
Vampire::~Vampire() {

}

// attack function
int Vampire::attackMove() {
    attack = attackRoll(1, 12);

    return attack;
}

// defense function
int Vampire::defenseMove(int damageTaken) {
    int abilityCharm = rand() % 2; // 50% chance of vampire using charm to prevent opponent's attack

    // gets attacked if does not use charm
    if (!abilityCharm) {
        int roll = defenseRoll(1, 6);

        defense = roll + armor;


        // if damage is less than defense, nor damage
        if (damageTaken < defense) {


        // if opponent Medusa rolled a 12, character instantly dies
        } else if (damageTaken == 500) {

            strengthPoints = 0;

        // calculate damage
        } else {
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

    // if character uses charm, prevents opponent's attack and loses no strength points
    else {

        return strengthPoints;
    }
}

// recovery function
void Vampire::recover() {
    strengthPoints += 9;
    if (strengthPoints > 18) {
        strengthPoints = 18;
    }

}

// get character type
string Vampire::getCharType() {
    type = "Vampire";
    return type;
}
