/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The harryPotter class holds the harryPotter functions. It is a derived class of the character class.
*********************************************************************/

#include "harryPotter.hpp"

// default constructor
HarryPotter::HarryPotter(string name) : Character(name) {

    this->name = name;
    abilityHogwarts = true; // set special ability to true
    armor = 0;
    strengthPoints = 10;

}

// destructor
HarryPotter::~HarryPotter() {

}

// attack function
int HarryPotter::attackMove() {
    attack = attackRoll(2, 6);

    return attack;
}

// defense function
int HarryPotter::defenseMove(int damageTaken) {
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

    // Harry lost all strength points in first life, will get 20 strength points for second life
    else if (strengthPoints <= 0 && abilityHogwarts) {
        strengthPoints = 20; // Harry Potter uses his second life ability which gives him 20 strength points

        abilityHogwarts = false; // set special ability to false
    }

    // character has no more strength points
    else {
        strengthPoints = 0;

    }
    return strengthPoints;
}

// recovery function
void HarryPotter::recover() {
    if (abilityHogwarts == true) {
        strengthPoints += 5;
        if (strengthPoints > 10) {
            strengthPoints = 10;
        }
    }
    else {
        strengthPoints += 10;
        if (strengthPoints > 20) {
            strengthPoints = 20;
        }
    }

}

// get character type
string HarryPotter::getCharType() {
    type = "Harry Potter";
    return type;
}
