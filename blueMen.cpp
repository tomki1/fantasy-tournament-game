/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The blueMen class holds the blueMen functions. It is a derived class of the character class.
*********************************************************************/

#include "blueMen.hpp"

// default constructor
BlueMen::BlueMen(string name) : Character(name) {

    this->name = name;
    armor = 3;
    strengthPoints = 12;
}

// destructor
BlueMen::~BlueMen() {

}

// attack function
int BlueMen::attackMove() {
    attack = attackRoll(2, 10);

    return attack;
}

// defense function
int BlueMen::defenseMove(int damageTaken) {
    int roll = 0;

    // if strength points are greater than 8, 3 defense dice rolls
    if (getStrengthPoints() > 8) {
        roll = defenseRoll(3, 6);
    }

    // if strength points are greater than 8, 2 defense dice rolls
    else if (getStrengthPoints() > 4 && getStrengthPoints() < 9) {
        roll = defenseRoll(2, 6);
    }

    // if strength points are greater than 8, 1 defense die roll
    else if (getStrengthPoints() < 5) {
        roll = defenseRoll(1, 6);
    }


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
        if (getStrengthPoints() > 4 && getStrengthPoints() < 9) {

        }
        if (getStrengthPoints() < 5) {

        }
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
void BlueMen::recover() {
    strengthPoints += 6;
    if (strengthPoints > 12) {
        strengthPoints = 12;
    }

}

// get character type
string BlueMen::getCharType() {
    type = "Blue Men";
    return type;
}

