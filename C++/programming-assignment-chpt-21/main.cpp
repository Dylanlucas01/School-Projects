/* 
*
* Dylan Lucas 
* * Chapter 21, Programming Assignment
* * November 2021 
* 
*/
#include "IntBinaryTree.h"
#include <stdio.h>
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void menu(IntBinaryTree &tree);
void addIn(IntBinaryTree &tree);
void display(IntBinaryTree &tree);
void showLeafs(IntBinaryTree &tree);
void showHeight(IntBinaryTree &tree);
void showWidth(IntBinaryTree &tree);

int main()
{
    // Initalizes binary tree
    IntBinaryTree tree;
    //runs menu
    menu(tree);
    return 0;
}

// ********************************************************
// name:      Menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     addIn, display, showLeafs, showHeight, showWidth
// The menu function runs and displays the menu prompts user for input
// ********************************************************
void menu(IntBinaryTree &tree)
{
    int choice = 0;
    string input;
    
    while(choice!=6) // Loops till user enters 6 for choice
    {
        cout << endl << endl << setw(27) << setfill('-') << "" << endl;
        cout << setw(3) << setfill(' ') << "" << "Menu" << setw(3) << setfill(' ') << "" <<endl;
        cout << setw(27) << setfill('-') << "" << endl;
        cout << "1. Insert one int into tree\n";
        cout << "2. Display tree in order\n";
        cout << "3. Display leaf count\n";
        cout << "4. Display tree height\n";
        cout << "5. Display tree width\n";
        cout << "6. Exit\n";
        cout << setw(27) << setfill('-') << "" << endl << endl;
        cout << "Please choose a menu option: ";
        getline(cin, input);
        choice = stoi(input);
        switch (choice) // Calls on respected function from option choice
        {
            case 1:
            {
                addIn(tree);
                break;
            }
            case 2:
            {
                display(tree);
                break;
            }
            case 3:
            {
                showLeafs(tree);
                break;
            }
            case 4:
            {
                showHeight(tree);
                break;
            }
            case 5:
            {
                showWidth(tree);
                break;
            }
            //Exit function
            case 6:
            {
                cout << "Bye!\n";
                break;
            }
            // Validation function for variable choice
            default:
            {
                cout << ("Error, that number is not on the menu\nPlease enter a valid number (1-5 or 6 to quit)\n");
            }
        }
    }
}

// ********************************************************
// name:      addIn
// called by: menu
// passed:    &tree
// returns:   nothing
// calls:     insertNode
// The addIn function adds a number inputed by the user into the tree
// ********************************************************
void addIn(IntBinaryTree &tree)
{
    string input1;
    int number;
    cout << "Please choose an integer to insert: ";
    getline(cin, input1);
    number = stoi(input1);
    tree.insertNode(number);
    cout << endl << number << " was inserted into the tree";
}

// ********************************************************
// name:      display
// called by: menu
// passed:    &tree
// returns:   nothing
// calls:     displayInOrder
// The display function displays the trees contense in order
// ********************************************************
void display(IntBinaryTree &tree)
{
    cout << "Displaying the tree in order: ";
    tree.displayInOrder();
    cout << endl;
}

// ********************************************************
// name:      showLeafs
// called by: menu
// passed:    &tree
// returns:   nothing
// calls:     leafCounter
// The showLeafs function displays the trees amount of leafs
// ********************************************************
void showLeafs(IntBinaryTree &tree)
{
    cout << "Displaying the leaf count: " << tree.leafCounter() << endl;
}

// ********************************************************
// name:      showLeafs
// called by: menu
// passed:    &tree
// returns:   nothing
// calls:     treeHeight
// The showLeafs function displays the trees height
// ********************************************************
void showHeight(IntBinaryTree &tree)
{
    cout << "Displaying the tree height: " << tree.treeHeight() - 1 << endl;
}

// ********************************************************
// name:      showWidth
// called by: menu
// passed:    &tree
// returns:   nothing
// calls:     treeWidth
// The showWidth function displays the trees width
// ********************************************************
void showWidth(IntBinaryTree &tree)
{
    cout << "Displaying the tree width: " << tree.treeWidth() << endl;
}
