/* 
*
* Dylan Lucas 
* * Chapter 19, Programming Assignment
* * October 2021 
* 
*/
#include "StringStack.h"
#include <stdio.h>
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void menu(StringStack &, StringStack &, StringStack &);
void pushNoun(StringStack &);
void popNoun(StringStack &);
void pushVerb(StringStack &);
void popVerb(StringStack &);
void pushAdj(StringStack &);
void popAdj(StringStack &);
void displayStacks(StringStack &, StringStack &, StringStack &);
void story(StringStack &, StringStack &, StringStack &);

int main()
{
    // Initalizes noun, verb, and adjective stacks
    StringStack nStack, vStack, aStack;
    //runs menu
    menu(nStack, vStack, aStack);
    return 0;
}

// ********************************************************
// name:      Menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     pushNoun, popNoun, pushVerb, popVerb, pushAdj, popAdj, displayStacks, story
// The menu function runs displays the menu prompts user for input
// ********************************************************
void menu(StringStack &nStack, StringStack &vStack, StringStack &aStack)
{
    int choice = 0;
    string input;
    
    while(choice!=9) // Loops till user enters 9 for choice
    {
        cout << endl << setw(27) << setfill('-') << "" << endl;
        cout << setw(3) << setfill(' ') << "" << "Halloween Madlib Menu" << setw(3) << setfill(' ') << "" <<endl;
        cout << setw(27) << setfill('-') << "" << endl;
        cout << "1. Push Noun\n";
        cout << "2. Pop Noun\n";
        cout << "3. Push Verb\n";
        cout << "4. Pop Verb\n";
        cout << "5. Push Adjective\n";
        cout << "6. Pop Adjective\n";
        cout << "7. Display All 3 Stacks\n";
        cout << "8. Make a Story\n";
        cout << "9. Exit\n";
        cout << setw(27) << setfill('-') << "" << endl << endl;
        cout << "Please choose a menu option: ";
        getline(cin, input);
        choice = stoi(input);
        switch (choice) // Calls on respected function from option choice
        {
            case 1:
            {
                pushNoun(nStack);
                break;
            }
            case 2:
            {
                popNoun(nStack);
                break;
            }
            case 3:
            {
                pushVerb(vStack);
                break;
            }
            case 4:
            {
                popVerb(vStack);
                break;
            }
            case 5:
            {
                pushAdj(aStack);
                break;
            }
            case 6:
            {
                popAdj(aStack);
                break;
            }
            case 7:
            {
                displayStacks(nStack, vStack, aStack);
                break;
            }
            case 8:
            {
                story(nStack, vStack, aStack);
                break;
            }
            //Exit function
            case 9:
            {
                cout << "Bye! Thanks for playing the word game!\n";
                break;
            }
            // Validation function for variable choice
            default:
                cout << ("Error, that number is not on the menu\nPlease enter a valid number (1-8 or 9 to quit)\n");
            
        }
    }
}

// ********************************************************
// name:      pushNoun
// called by: menu
// passed:    &nStack
// returns:   nothing
// calls:     push
// The pushNoun function adds entered input to the top of noun stack
// ********************************************************
void pushNoun(StringStack &nStack)
{
    string input1;
    cout << "Enter Noun: ";
    getline(cin, input1);
    while(input1=="" || input1.length() > 10) // Validation check - loops until acceptable word is entered
    {
        if(input1=="") // Validation for nothing entered
        {
            cout << "No Noun was entered\n";
            cout << "Enter Noun: ";
            getline(cin, input1);
        }
        else if(input1.length() > 10) // Validation for word length
        {
            cout << "That noun has too many letters\n";
            cout << endl << "Enter Noun: ";
            getline(cin, input1);
        }
    }
    nStack.push(input1);
    cout << "Cool, thanks for the noun.\n"; 
}

// ********************************************************
// name:      popNoun
// called by: menu
// passed:    &nStack
// returns:   nothing
// calls:     isEmpty, pop
// The popNoun function removes the top word noun stack
// ********************************************************
void popNoun(StringStack &nStack)
{
    if(nStack.isEmpty()) // Validation check for empty stack
    {
        cout << "Your Noun Stack is Empty\n";
    }
    else
    {
        nStack.pop();
        cout << "Okay, I have Popped the top word from the Noun Stack\n";
    }
}

// ********************************************************
// name:      pushVerb
// called by: menu
// passed:    &vStack
// returns:   nothing
// calls:     push
// The pushVerb function adds entered input to the top of verb stack
// ********************************************************
void pushVerb(StringStack &vStack)
{
    string input1;
    cout << "Enter Verb: ";
    getline(cin, input1);
    while(input1=="" || input1.length() > 10) // Validation check - loops until acceptable word is entered
    {
        if(input1=="") // Validation for nothing entered
        {
            cout << "No Verb was entered\n";
            cout << "Enter Verb: ";
            getline(cin, input1);
        }
        else if(input1.length() > 10)  // Validation for word length
        {
            cout << "That verb has too many letters\n";
            cout << endl << "Enter Verb: ";
            getline(cin, input1);
        }
    }
    vStack.push(input1);
    cout << "Yay! Thanks for the verb.\n"; 
}

// ********************************************************
// name:      popVerb
// called by: menu
// passed:    &vStack
// returns:   nothing
// calls:     isEmpty, pop
// The popVerb function removes the top word verb stack
// ********************************************************
void popVerb(StringStack &vStack)
{
    if(vStack.isEmpty()) // Validation check for empty stack
    {
        cout << "Your Verb Stack is Empty\n";
    }
    else
    {
        vStack.pop();
        cout << "Okay, I have Popped the top word from the Verb Stack\n";
    }
}

// ********************************************************
// name:      pushAdj
// called by: menu
// passed:    &aStack
// returns:   nothing
// calls:     push
// The pushAdj function adds entered input to the top of adjective stack
// ********************************************************
void pushAdj(StringStack &aStack)
{
    string input1;
    cout << "Enter Adjective: ";
    getline(cin, input1);
    while(input1=="" || input1.length() > 10) // Validation check - loops until acceptable word is entered
    {
        if(input1=="") // Validation for nothing entered
        {
            cout << "No Adjective was entered\n";
            cout << "Enter Adjective: ";
            getline(cin, input1);
        }
        else if(input1.length() > 10) // Validation for word length
        {
            cout << "That adjective has too many letters\n";
            cout << endl << "Enter Adjective: ";
            getline(cin, input1);
        }
    }
    aStack.push(input1);
    cout << "Yay! An adjective has been pushed onto the Adjective Stack\n"; 
}

// ********************************************************
// name:      popAdj
// called by: menu
// passed:    &aStack
// returns:   nothing
// calls:     isEmpty, pop
// The popAdj function removes the top word verb stack
// ********************************************************
void popAdj(StringStack &aStack)
{
    if(aStack.isEmpty()) // Validation check for empty stack
    {
        cout << "Your Adjective Stack is Empty\n";
    }
    else
    {
        aStack.pop();
        cout << "Okay, I have Popped the top word from the Adjective Stack\n";
    }
}

// ********************************************************
// name:      displayStacks
// called by: menu
// passed:    &nStack, &vStack, &aStack
// returns:   nothing
// calls:     display
// The displayStacks function prints contense of all 3 stacks in readable format
// ********************************************************
void displayStacks(StringStack &nStack, StringStack &vStack, StringStack &aStack)
{
    cout << "***Here are your 3 Stacks***\n\n";
    
    cout << "Noun Stack: \n";
    nStack.display();
    
    cout << "Verb Stack: \n";
    vStack.display();
    
    cout << "Adjective Stack: \n";
    aStack.display();
}

// ********************************************************
// name:      story
// called by: menu
// passed:    &nStack, &vStack, &aStack
// returns:   nothing
// calls:     totalWords, randWord
// The story function prints story with random words from respected stacks
// ********************************************************
void story(StringStack &nStack, StringStack &vStack, StringStack &aStack)
{
    if(nStack.totalWords()<4) // Validation for enough nouns in noun stack
    {
        cout << "Your noun stack doesn't have enough words to make a story. You will need at least " << 4-nStack.totalWords() << " more nouns.\n";
    }
    if(vStack.totalWords()<1) // Validation for enough verbs in verb stack
    {
        cout << "Your verb stack doesn't have enough words to make a story. You will need at least " << 1-vStack.totalWords() << " more verb.\n";
    }
    if(aStack.totalWords()<4) // Validation for enough adjectives in adjective stack
    {
        cout << "Your adjective stack doesn't have enough words to make a story. You will need at least " << 4-aStack.totalWords() << " more adjectives.\n";
    }
    else
    {
        // Prints story
        cout << "I am going to the most ";
        cout << "**" << aStack.randWord() <<"**";
        cout << " Halloween party!\n";
        cout << "I was told by a ";
        cout << "**" << aStack.randWord() << "**";
        cout << " ";
        cout << "**" << nStack.randWord() << "**";
        cout << " to meet at the abandoned record store.\n";
        cout << "I will be dressing up as a ";
        cout << "**" << aStack.randWord() << "**";
        cout << " ";
        cout << "**" << nStack.randWord() << "**";
        cout << ".\nThere is going to be a ";
        cout << "**" << nStack.randWord() << "**";
        cout << " eating contest, pumkin ";
        cout << "**" << vStack.randWord() << "**";
        cout << "-ing, and bobbing for ";
        cout << "**" << nStack.randWord() << "**";
        cout << "-s.\nHopefuly this will be the ";
        cout << "**" << aStack.randWord() <<"**";
        cout << "-ist Halloween!\n";
    }
    
}
