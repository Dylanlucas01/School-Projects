#include "ColorList.h"
#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
using namespace std;

// ********************************************************
// name:      ~ColorList
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The ~ColorList function is the deconstructor
// ********************************************************
ColorList::~ColorList()
{
    ListNode *nodePtr;
    ListNode *nextNode;
    nodePtr = head;
    while(nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

// ********************************************************
// name:      appendColor
// called by: menu
// passed:    color
// returns:   nothing
// calls:     colorCheck
// The appendColor function adds a node with
// entered color at the end of the list
// ********************************************************
void ColorList::appendColor(string color)
{
    colorCheck(color); // Validation check
    ListNode *newNode;
    ListNode *current;
    newNode = new ListNode;
    newNode->value = color;
    newNode->next = nullptr;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        head = newNode;
    }
    else
    {
        current = head;
        while(current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    cout << "Yay! A " << color << " node has been appended to your list.\n";
}

// ********************************************************
// name:      insertColor
// called by: menu
// passed:    color, index
// returns:   nothing
// calls:     colorCheck
// The insertColor function inserts a node
// with entered color at a specific location
// ********************************************************
void ColorList::insertColor(string color, int index)
{
    int i = 0;
    colorCheck(color); // Validation check
    ListNode *newNode;
    ListNode *current;
    ListNode *previous;
    newNode = new ListNode;
    newNode->value = color;
    current = head;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        if(index>0) // Validation check; index out of bounds
        {
            cout << "I'm sorry but there is no node " << index << " available.\n";
            return;
        }
        head = newNode;
        newNode->next = nullptr;
        cout << "Yay! A " << color << " node has been inserted at position (0) in your list.\n";
        return;
    }
    else
    {
        current = head;
        previous = nullptr;
        // Transveres list until reaches entered index
        while(current != nullptr && i<index)
        {
            if(current->next == nullptr) // Validation check; index out of bounds
            {
                cout << "I'm sorry but there is no node " << index << " available.\n";
                return;
            }
            previous = current;
            current = current->next;
            i++;
        }
        if(previous == nullptr)
        {
            head = newNode;
            newNode->next = current;
        }
        else
        {
            previous->next = newNode;
            newNode->next = current;
        }
    }
    cout << "Yay! A " << color << " node has been inserted at position (" << index << ") in your list.\n";
}

// ********************************************************
// name:      deleteColor
// called by: menu
// passed:    index
// returns:   nothing
// calls:     nothing
// The deleteColor function deletes a node at specific location
// ********************************************************
void ColorList::deleteColor(int index)
{
    int i = 0;
    ListNode *current;
    ListNode *previous;
    current = head;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        cout << "Your list is already empty.\n";
        return;
    }
    else if(index==0) // Checks if index is the head
        {
            current = head->next;
            delete head;
            head = current;
        }
    else
    {
        // Transveres list until reaches entered index
        while(current != nullptr && i<index)
        {
            if(current->next == nullptr) // Validation check; index out of bounds
            {
                cout << "I'm sorry but there is no node " << index << " available.\n";
                return;
            }
            previous = current;
            current = current->next;
            i++;
        }
        if(current)
        {
            previous->next = current->next;
            delete current;
        }
    }
    cout << "Node (" << index << ") has been deleted from your list.\n";
}

// ********************************************************
// name:      display
// called by: menu
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The display function displays the list in readable format
// ********************************************************
void ColorList::display()
{
    int count = 0;
    ListNode *current;
    current = head;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        cout << "Your list is empty.\n";
        return;
    }
    else
    {
        cout << "Here is your current list:\n";
        while(current!=NULL)
        {
            cout << "(" << count << ") " << current->value << endl;
            current = current->next;
            count++;
        }
        cout << endl;
    }
}

// ********************************************************
// name:      reverse
// called by: menu
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The reverse function reverses the list
// ********************************************************
void ColorList::reverse()
{
    ListNode *current;
    ListNode *previous;
    ListNode *temp;
    current = head;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        cout << "Your list is empty.\n";
        return;
    }
    else
    {
        while(current!=nullptr)
        {
            temp = current->next;
            current->next = previous;
            previous = current;
            current = temp;
        }
        head = previous;
        cout << "Your list has been reversed.";
    }
}

// ********************************************************
// name:      searchColor
// called by: menu
// passed:    color
// returns:   nothing
// calls:     colorCheck
// The searchColor function transveres the list
// and outputs the location of entered color
// ********************************************************
void ColorList::searchColor(string color)
{
    int i = 0;
    bool isThere = false; // boolean flag raises when entered color is found
    colorCheck(color); // Validation check
    ListNode *current;
    ListNode *previous;
    current = head;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        cout << "Your list is empty.\n";
        return;
    }
    else
    {
        while(current != nullptr)
        {
            if(current->value == color)
            {
                cout << "There is a " << color << " node at position (" << i << ")\n";
                isThere = true; // Raises flag
            }
            previous = current;
            current = current->next;
            i++;
        }
        if(isThere == false) // Prompts user if flag is not raised
        {
            cout << "There are no " << color << " nodes in your list.\n";
            return;
        }
    }
}

// ********************************************************
// name:      monochrome
// called by: menu
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The monochrome function sets colors inside the list
// from red->black, blue->gray, yellow->white
// ********************************************************
void ColorList::monochrome()
{
    // Initalizes new colors
    string bl = "black";
    string gr = "gray";
    string wh = "white";
    
    ListNode *current;
    current = head;
    
    // Checks to see if there are nodes in list
    if(!head)
    {
        cout << "Your list is empty.\n";
        return;
    }
    else
    {
        // Transveres list and changes each color value respectivly
        while(current!=NULL)
        {
           if(current->value == r || current->value == rCap) // Checks for red
           {
               current->value = bl; // Sets red->black
           }
           else if(current->value == b || current->value == bCap) // Checks for blue
           {
               current->value = gr; // Sets blue->gray
           }
           else if(current->value == y || current->value == yCap) // Checks for yellow
           {
               current->value = wh; // Sets yellow->white
           }
           current = current->next; // Moves onto new node
        }
    }
    cout << "Your list is now monochrome.\n";
}

// ********************************************************
// name:      colorCheck
// called by: appendColor, insertColor, searchColor
// passed:    theColor
// returns:   nothing
// calls:     EXIT_FAILURE
// The colorCheck function validates that if the entered color is acceptable
// The mutator function's exit_failure
// if color is acceptable does nothing
// if color is unacceptable promts user and calls exit_failure
// ********************************************************
void ColorList::colorCheck(string theColor)
{
    if(theColor == r || theColor == rCap) // Checks for red
    {
        return;
    }
    else if(theColor == b || theColor == bCap) // Checks for blue
    {
        return;
    }
    else if(theColor == y || theColor == yCap) // Checks for yellow
    {
        return;
    }
    else
    {
        cout << "Error: " << theColor << " is not a color that is allowed.\n";
        exit (EXIT_FAILURE);
    }
}