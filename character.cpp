/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The character class holds the Character functions.
*********************************************************************/

#include "character.hpp"

// default constructor
Character::Character(string name) {

    this->name = name;
    attack = 0;
    defense = 0;
}

// destructor
Character::~Character() {

}

// return character name
string Character::getCharName() {
    return name;
}

// set character name
void Character::setCharName(string name) {
    this->name = name;
}

// get character strength points
int Character::getStrengthPoints() {
    return strengthPoints;
}

// attack dice roll
int Character::attackRoll(int rollCount, int dieSides) {

    int attackRoll = 0;
    for (int i = 0; i < rollCount; i++) {
        attackRoll += 1 + rand() % ((dieSides + 1) - 1);
    }
    return attackRoll;
}

// defense dice roll
int Character::defenseRoll(int rollCount, int dieSides) {
    int defenseRoll = 0;
    for (int i = 0; i < rollCount; i++) {
        defenseRoll += 1 + rand() % ((dieSides + 1) - 1);
    }
    return defenseRoll;

}

// return attack
int Character::getAttack() {
    return attack;
}
