/* 
*
* Dylan Lucas 
* * Chapter 20, Programming Assignment
* * October 2021 
* 
*/
#include "LineQueue.h"
#include <stdio.h>
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void menu(LineQueue &);
void addName(LineQueue &);
void makeOrder(LineQueue &);
void countNames(LineQueue &);
void drawRaffle(LineQueue &);
void displayLine(LineQueue &);
void helpBff(LineQueue &);

int main()
{
    // Initalizes noun, verb, and adjective stacks
    LineQueue snowsBBQ;
    //runs menu
    menu(snowsBBQ);
    return 0;
}

// ********************************************************
// name:      Menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     addName, makeOrder, countNames, drawRaffle, displayLine, helpBff
// The menu function runs and displays the menu prompts user for input
// ********************************************************
void menu(LineQueue &snowsBBQ)
{
    int choice = 0;
    string input;
    
    while(choice!=7) // Loops till user enters 7 for choice
    {
        cout << endl << setw(27) << setfill('-') << "" << endl;
        cout << setw(3) << setfill(' ') << "" << "Snow's BBQ Menu" << setw(3) << setfill(' ') << "" <<endl;
        cout << setw(27) << setfill('-') << "" << endl;
        cout << "1. Add a Name\n";
        cout << "2. Make an Order\n";
        cout << "3. Count Names\n";
        cout << "4. Draw Raffle Winner\n";
        cout << "5. Display Line\n";
        cout << "6. Help your BFF\n";
        cout << "7. Exit\n";
        cout << setw(27) << setfill('-') << "" << endl << endl;
        cout << "Please choose a menu option: ";
        getline(cin, input);
        choice = stoi(input);
        switch (choice) // Calls on respected function from option choice
        {
            case 1:
            {
                addName(snowsBBQ);
                break;
            }
            case 2:
            {
                makeOrder(snowsBBQ);
                break;
            }
            case 3:
            {
                countNames(snowsBBQ);
                break;
            }
            case 4:
            {
                drawRaffle(snowsBBQ);
                break;
            }
            case 5:
            {
                displayLine(snowsBBQ);
                break;
            }
            case 6:
            {
                helpBff(snowsBBQ);
                break;
            }
            //Exit function
            case 7:
            {
                cout << "Bye! Thanks for coming!\n";
                break;
            }
            // Validation function for variable choice
            default:
            {
                cout << ("Error, that number is not on the menu\nPlease enter a valid number (1-6 or 7 to quit)\n");
            }
        }
    }
}

// ********************************************************
// name:      addName
// called by: menu
// passed:    &nStack
// returns:   nothing
// calls:     push
// The addName function 
// ********************************************************
void addName(LineQueue &snowsBBQ)
{
    string input1;
    cout << "Enter your name: ";
    getline(cin, input1);
    while(input1=="" || input1.length() > 19) // Validation check - loops until acceptable word is entered
    {
        if(input1=="") // Validation for nothing entered
        {
            cout << "No name was entered\n";
            cout << "Enter your name: ";
            getline(cin, input1);
        }
        else if(input1.length() > 19) // Validation for word length
        {
            cout << "Your name has " << input1.length() - 19 << " too many letters\n";
            cout << endl << "Enter your name: ";
            getline(cin, input1);
        }
    }
    snowsBBQ.addCustomer(input1);
}

// ********************************************************
// name:      makeOrder
// called by: menu
// passed:    &nStack
// returns:   nothing
// calls:     isEmpty, pop
// The makeOrder function 
// ********************************************************
void makeOrder(LineQueue &snowsBBQ)
{
    snowsBBQ.order();
    cout << ", you can order now!\n";
}

// ********************************************************
// name:      countNames
// called by: menu
// passed:    &vStack
// returns:   nothing
// calls:     push
// The countNames function 
// ********************************************************
void countNames(LineQueue &snowsBBQ)
{
    int count = snowsBBQ.getCount();
    cout << "Number of people in the line: " << count << endl;
}

// ********************************************************
// name:      drawRaffle
// called by: menu
// passed:    &vStack
// returns:   nothing
// calls:     isEmpty, pop
// The drawRaffle function 
// ********************************************************
void drawRaffle(LineQueue &snowsBBQ)
{
    string input1;
    string winner = snowsBBQ.draw();
    int winnerIndex = snowsBBQ.getTheIndex(winner, 0);
    cout << winner << ", do you want:\n";
    cout << "2. A free t-shirt\n" << endl;
    getline(cin, input1);
    int prize = stoi(input1);
    while(prize != 1 || prize != 2)
    {
            cout << "Please enter 1 or 2 as an option\n";
            cout << winner << ", do you want:\n";
            cout << "2. A free t-shirt\n" << endl;
            getline(cin, input1);
            prize = stoi(input1);
    }
    if(prize = 1)
    {
        snowsBBQ.moveToFront(winnerIndex);
    }
    else if(prize = 2)
    {
        cout << winner << ", you are getting a free t-shirt!\n";   
    }
}

// ********************************************************
// name:      displayLine
// called by: menu
// passed:    &aStack
// returns:   nothing
// calls:     push
// The displayLine function 
// ********************************************************
void displayLine(LineQueue &snowsBBQ)
{
    snowsBBQ.getDisplay();
}

// ********************************************************
// name:      helpBff
// called by: menu
// passed:    &aStack
// returns:   nothing
// calls:     isEmpty, pop
// The helpBff function 
// ********************************************************
void helpBff(LineQueue &snowsBBQ)
{
    string input1;
    cout << "Please input the name of your BFF: ";
    getline(cin, input1);
    while(input1=="" || input1.length() > 19) // Validation check - loops until acceptable word is entered
    {
        if(input1=="") // Validation for nothing entered
        {
            cout << "No name was entered\n";
            cout << "Please input the name of your BFF: ";
            getline(cin, input1);
        }
        else if(input1.length() > 19) // Validation for word length
        {
            cout << "Your BFF's name has " << input1.length() - 19 << " too many letters\n";
            cout << endl << "Please input the name of your BFF: ";
            getline(cin, input1);
        }
    }
    snowsBBQ.broDeal(input1);
}
