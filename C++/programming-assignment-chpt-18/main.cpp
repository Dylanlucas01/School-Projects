/* 
*
* Dylan Lucas 
* * Chapter 18, Programming Assignment
* * October 2021 
* 
*/
#include "ColorList.h"
#include <stdio.h>
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;

// Global constants for validation checks
// Each valid color undercase and capitalized
const string R = "red";
const string B = "blue";
const string Y = "yellow";
const string RCAP = "Red";
const string BCAP = "Blue";
const string YCAP = "Yellow";

// Function prototypes
void menu(ColorList);
void displayMenu();
bool notSafe(string);

int main()
{
    // Declairing linked list ColorList
    struct ColorList *newHead;
	struct ColorList *head = new ColorList;
    menu(*head); // Calls on menu function to run switch case
    return 0;
}

void menu(ColorList theList)
{
    string choice = "0"; // Initalizes variable choice to 0 so casting will work
    string input1, input2; // Initalizes variables for user input of color and index
    
    while(stoi(choice)!=8) // Loops till user enters 8 for choice - cast string->int for choice
    {
        displayMenu(); // Displays menu options
        cout << "Please choose a menu option: ";
        getline(cin, choice); // Saves user input to variable choice with getline
        cout << endl;
        switch (stoi(choice)) // Calls on respected function from option choice - cast string->int for choice
        {
            // Append function
            case 1:
            {
                cout << "Enter Node Color: ";
                getline(cin, input1); // Saves user input to variable input1 with getline
                while(notSafe(input1)) // Validation check - loops until acceptable color is entered
                {
                    cout << "Error: " << input1 << " is not a color that is allowed.\n";
                    cout << endl << "Enter Node Color: ";
                    getline(cin, input1); // Saves user input to variable input1 with getline
                }
                theList.appendColor(input1);
                break;
            }
            // Insert function
            case 2:
            {
                cout << "Enter Node Color: ";
                getline(cin, input1); // Saves user input to variable input1 with getline
                while(notSafe(input1)) // Validation check - loops until acceptable color is entered
                {
                    cout << "Error: " << input1 << " is not a color that is allowed.\n";
                    cout << "Enter Node Color: ";
                    getline(cin, input1); // Saves user input to variable input1 with getline
                    cout << endl;
                }
                cout << "Enter Insert Position: ";
                getline(cin, input2); // Saves user input to variable input2 with getline
                theList.insertColor(input1, stoi(input2)); // Cast string->int for input2
                break;
            }
            // Delete function
            case 3:
            {
                cout << "What node position do you wish to delete? ";
                getline(cin, input2); // Saves user input to variable input2 with getline
                theList.deleteColor(stoi(input2)); // Cast string->int for input2
                break;
            }
            // Print function
            case 4:
            {
                theList.display();
                break;
            }
            // Reverse function
            case 5:
            {
                theList.reverse();
                break;
            }
            // Search function
            case 6:
            {
                cout << "Enter color to search for: ";
                getline(cin, input1); // Saves user input to variable input1 with getline
                while(notSafe(input1)) // Validation check - loops until acceptable color is entered
                {
                    cout << "Error: " << input1 << " is not a color that is allowed.\n";
                    cout << "Enter Node Color: ";
                    getline(cin, input1); // Saves user input to variable input1 with getline
                }
                theList.searchColor(input1);
                break;
            }
            // Monochrome function
            case 7:
            {
                theList.monochrome();
                break;
            }
            //Exit function
            case 8:
            {
                cout << "Bye! Thanks for using the Primary Color List Game\n";
                break;
            }
            // Validation function for variable choice
            default:
                cout << ("Error, that number is not on the menu\nPlease enter a valid number (1-7 or 8 to quit)\n");
            
        }
    }
}

// ********************************************************
// name:      displayMenu
// called by: menu
// passed:    nothing
// returns:   nothing
// calls:     iomanip functions
// The DisplayMenu function displays the menu options
// ********************************************************
void displayMenu()
{
    cout << endl << setw(14) << setfill('-') << "" << endl;
    cout << setw(5) << setfill(' ') << "" << "Menu" << setw(5) << setfill(' ') << "" <<endl;
    cout << setw(14) << setfill('-') << "" << endl;
    cout << "1. Append\n";
    cout << "2. Insert\n";
    cout << "3. Delete\n";
    cout << "4. Print\n";
    cout << "5. Reverse\n";
    cout << "6. Search\n";
    cout << "7. Monochrome\n";
    cout << "8. Exit\n";
    cout << setw(14) << setfill('-') << "" << endl;
}

// ********************************************************
// name:      notSafe
// called by: menu
// passed:    enteredColor
// returns:   boolean: true or false
// calls:     nothing
// The notSafe function validates if the entered color is acceptable or not
// Returns true when entered color is unacceptable; it is notSafe
// Returns false when entered color is acceptable; it is safe
// ********************************************************
bool notSafe(string enteredColor)
{
    if(enteredColor == R || enteredColor == RCAP) // Checks for red
    {
        return false;
    }
    else if(enteredColor == B || enteredColor == BCAP) // Checks for blue
    {
        return false;
    }
    else if(enteredColor == Y || enteredColor == YCAP) // Checks for yellow
    {
        return false;
    }
    else
    {
        return true;
    }
}

