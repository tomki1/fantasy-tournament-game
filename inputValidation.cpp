/*********************************************************************
** Program name: Project 4
** Author: Kimberly Tom
** Date: 5/25/18
** Description: The inputValidation class holds the functions to check if user's input is valid.
*********************************************************************/

#include "inputValidation.hpp"

// input validation for start menu
int validateStart() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger != 1 && validInteger != 2)
            {
                cout << "Please enter 1 or 2" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter 1 or 2" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// input validation for fighter count
int validateFighterCount() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger < 1 || validInteger > 10)
            {
                cout << "Please enter an integer between 1 and 10" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter an integer between 1 and 10" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// input validation for character selection
int validate() {

    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger < 1 || validInteger > 5)
            {
                cout << "Please enter an integer between 1 and 5" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter an integer between 1 and 5" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// validate name of character
string validateName() {
    bool errFlag = false;
    string input;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> input)
        {

            if (input.length() < 1 || input.length() > 20)
            {
                cout << "Please enter a name length between 1 and 20." << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter a name length between 1 and 20." << endl;
        }

    } while (errFlag == false);
    return input;

}

// input validation for whether user wants to display loser list
int validateLoserList() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger != 1 && validInteger != 2)
            {
                cout << "Please enter 1 or 2" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter 1 or 2" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}