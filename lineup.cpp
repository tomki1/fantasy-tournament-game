/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The functions for the lineup class.
*********************************************************************/

#include "lineup.hpp"

// default constructor to set pointers to NULL
Lineup::Lineup() {
    head = NULL;
    tail = NULL;

}

// destructor
Lineup::~Lineup() {
    while (!isEmpty()) {
        // if only one value in queue, delete that value and set the head to NULL
        if (head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
        }
            // if more than one value in queue, delete the front value
        else {
            CharacterNode *tempQueue = head;
            head = head->next; // move the head to the next value in the queue
            head->prev = tail; // set the value before head to tail
            tail->next = head; // set the new next node to the head
            delete tempQueue; // delete the temporary pointer
        }
    }
}

// checks if queue is empty, returns true if queue is empty, false if not
bool Lineup::isEmpty() {
    // if queue is empty, return true
    if (head == NULL) {
        return true;
    }

        // if queue is not empty, return false
    else {
        return false;
    }
}

// add new character
void Lineup::addNewCharacter(int creature, string name) {
    // if queue is empty, add to list
    if (isEmpty()) {
        head = new CharacterNode(creature, name);
        tail = head;
        head->next = tail; // set entry after head to tail
        head->prev = tail; // set entry before head to tail
        tail->next = head; // set entry after tail to head
        tail->prev = head; // set entry before tail to head


    }
        // if queue is not empty, add to end of list
    else {
        CharacterNode *temp = new CharacterNode(creature, name);
        head->prev = temp; // set entry before head to temp
        tail->next = temp; // set entry after tail to temp
        temp->prev = tail; // set entry before temp to tail
        temp->next = head; // set entry after temp to head
        tail = temp; // set tail to temp value

    }
}

// return character at front of queue
Character* Lineup::getFront() {

    // if not empty, return the value at the head of the queue.
    if (isEmpty()) {
        return NULL;
    }
    else {
        return head->character;
    }
}

// remove character from front of queue
CharacterNode* Lineup::removeFront() {

// if queue is empty, there is no value to remove
    if (isEmpty()) {
        cout << "The queue is empty.  There is no character to remove." << endl;
        return NULL;
    }
    // if only one value in queue, delete that value and set the head to NULL
    else if  (head == tail) {
        CharacterNode *temp = head;
        head = NULL;
        tail = NULL;
        return temp;
    }
    // if more than one value in queue, delete the front value
    else {
        CharacterNode *tempQueue = head;
        head = head->next; // move the head to the next value in the queue
        head->prev = tail; // set the previous front to the tail
        tail->next = head; // set tail to head
        return tempQueue; // delete the temporary pointer
    }
}


// add character to back of queue
void Lineup::addToBack(CharacterNode *node) {
    // if nothing in queue
    if (isEmpty()) {
        head = node;
        tail = head;

        head->next = tail; // next next spot is tail
        head->prev = tail; // previous spot is tail
        tail->next = head; // next spot is head
        tail->prev = head; // previous spot is head
    }
    // if something already in queue
    else {
        CharacterNode *temp = node;
        head->prev = temp; // set entry before head to new node
        tail->next = temp; // set entry after tail to new node
        temp->prev = tail; // set entry before new node to old tail
        temp->next = head; // set entry after new node to old head
        tail = temp; // set tail to the new temp node
    }

}

// add character to front of queue
void Lineup::addToFront(CharacterNode *node) {
    // if nothing in queue
    if (isEmpty()) {
        head = node;
        tail = head;

        head->next = tail; // next spot is tail
        head->prev = tail; // previous spot is tail
        tail->next = head; // next spot is head
        tail->prev = head; // previous spot is head
    }
    // if something already in queue
    else {
        CharacterNode *temp = node;
        tail->next = temp; // set entry after tail to new temp node
        head->prev = temp; // set entry before head to new temp node
        temp->prev = tail; // set entry before new node to old tail
        temp->next = head; // set entry after new node to old head
        head = temp; // set head to the new temp node
    }

}

// prints loser list
void Lineup::printList() {

    // if empty, tell user queue is empty
    if (isEmpty()) {
        cout << "The queue is empty. There are no values to display." << endl;
    }
        // if queue is not empty, print queue
    else {
        CharacterNode *list = head; // create pointer
        cout << "The characters who lost are: ";
        // while queue does not equal the head, keep printing values
        do {
            cout << list->character->getCharName() << " ";
            list = list->next;
        } while (list != head);
        cout << endl;
    }
}