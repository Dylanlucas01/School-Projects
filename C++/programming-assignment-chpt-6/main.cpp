/* 
*
* Dylan Lucas 
* * Chapter 6&7, Programming Assignment Review
* * September 2021 
* 
*/

#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

// Global constants for rows and columns
    const int ROWS = 5, COLS = 5;
    
// Function prototypes

void displayMenu(char [][COLS], int);
void switchCol(char [][COLS], int);
void displayNumVowels(char [][COLS], int);
void displayArray(char [][COLS], int);
void searchChar(char [][COLS], int);
void finish();

int main()
{
    // Variable to hold array of character set
    char firstArray[ROWS][COLS] = {{'s', 'w', 'e', 'e', 't'},
                                  {'h', 'e', 'a', 'r', 't'},
                                  {'e', 'g', 'r', 'i', 't'},
                                  {'c', 'l', 'o', 'n', 'e'},
                                  {'o', 'd', 'o', 'r', 's'}};
    
    // Calls on displayMenu to run menu loop
    displayMenu(firstArray, ROWS);
}

// ********************************************************
// name:      Menu
// called by: displayMenu
// passed:    nothing
// returns:   nothing
// calls:     switchCol, displayNumVowels, displayArray, searchChar, finish
// The menu function displays menu options on call
// ********************************************************
void menu()
{
    cout << "\n1. Switch Column 1 and 4\n";
    cout << "2. Display the Total Number of Vowels\n";
    cout << "3. Display the Entire Array\n";
    cout << "4. Search for and display number of instances of any given character\n";
    cout << "5. Exit\n";
}

// ********************************************************
// name:      displayMenu
// called by: main
// passed:    char secondArray [][COLS], int ROWS
// returns:   nothing
// calls:     switchCol, displayNumVowels, displayArray, searchChar, finish
// The displayMenu function displays the menu options
// asks the user for a menu choice and calls on respected function to menu choice
// if number outside of bounds is called will prompt user to re enter choice
// ********************************************************
void displayMenu(char secondArray [][COLS], int ROWS)
{
    int choice = 0; // Initalizes variable choice
    while (choice != 5) // Loops till user enters 5 for choice
    {
        menu(); // Displays menu options
        // Prompts user for choice number
        cout << "\nEnter the number of your choice: ";
        cin >> choice;
        switch (choice) // Calls on respected function from option choice
        {
            case 1:
            {
                switchCol(secondArray, ROWS);
                break;
            }
            case 2:
            {
                displayNumVowels(secondArray, ROWS);
                break;
            }
            case 3:
            {
                displayArray(secondArray, ROWS);
                break;
            }
            case 4:
            {
                searchChar(secondArray, ROWS);
                break;
            }
            case 5:
            {
                finish();
                break;
            }
            default:
                cout<< ("Error, that number is not on the menu\nPlease enter a valid number (1-4 or 5 to quit)\n");
            
        }
    }
}

// ********************************************************
// name:      switchCol
// called by: displayMenu
// passed:    char thirdArray [][COLS], int ROWS
// returns:   nothing
// calls:     nothing
// The switchCol function switches the first and fourth columns
// notifies user function was completed
// ********************************************************
void switchCol(char thirdArray [][COLS], int ROWS)
{
    char holdArray[ROWS][COLS]; // Temp array
    for (int r = 0; r < ROWS; r++) // Loops through rows for a set column
        {
          holdArray[r][0]=thirdArray[r][0]; // Column 1 placed in temp array
          thirdArray[r][0]=thirdArray[r][3]; // Column 4 placed in column 1
          thirdArray[r][3]=holdArray[r][0]; // Temp array placed in column 4
        }
    cout << "The columns in your array have been switched.\n";
}

// ********************************************************
// name:      displayNumVowels
// called by: displayMenu
// passed:    char thirdArray [][COLS], int ROWS
// returns:   nothing
// calls:     nothing
// The displayNumVowels function counts and outputs
// the amount of times there is a vowel in the array
// ********************************************************
void displayNumVowels(char thirdArray [][COLS], int ROWS)
{
    int count=0; // Initalizes count
    for (int r = 0; r < ROWS; r++)
        {
            for (int c = 0; c < COLS; c++)
            {
                if(thirdArray[r][c] == 'a'|| thirdArray[r][c] == 'e'|| thirdArray[r][c] == 'i'|| thirdArray[r][c] == 'o'|| thirdArray[r][c] == 'u')
                    {
                        count++; // Adds to count if character at index is a vowel
                    }
            }
        }
    cout << "There are " << count << " vowels in this array\n";
}

// ********************************************************
// name:      displayArray
// called by: displayMenu
// passed:    char thirdArray [][COLS], int ROWS
// returns:   nothing
// calls:     nothing
// The displayArray function outputs the current array
// ********************************************************
void displayArray(char thirdArray [][COLS], int ROWS)
{
    cout << "\nHere is your array: \n";
    for (int r = 0; r < ROWS; r++)
        {
            for (int c = 0; c < COLS; c++)
                {
                    cout << thirdArray[r][c] << " "; // Outputs character at array index
                }
            cout << endl;
        }
}

// ********************************************************
// name:      searchChar
// called by: displayMenu
// passed:    char thirdArray [][COLS], int ROWS
// returns:   nothing
// calls:     nothing
// The searchChar function ask user for a character to search for a character
// finds and outputs the amount of times the character is in the array
// ********************************************************
void searchChar(char thirdArray [][COLS], int ROWS)
{
    char theChar; // Initalizes variable for input
    int count=0; // Initalizes count
    // Prompts user for character to search for
    cout << "Please enter a specific character to locate: ";
    cin >> theChar;
    for (int r = 0; r < ROWS; r++)
        {
            for (int c = 0; c < COLS; c++)
                {
                if(thirdArray[r][c] == theChar)
                    {
                        count++; // Adds to count if characters match
                    }
                }
        }
    cout << "There are " << count << " instances of your character.\n";
}

// ********************************************************
// name:      finish
// called by: displayMenu
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The finish function notifies user and terminates program
// ********************************************************
void finish()
{
    cout << "Thank you for playing this game, goodbye.\n";
}