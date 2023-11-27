#include "StringStack.h"
#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
#include <cstdlib>
using namespace std;

// ********************************************************
// name:      ~StringStack
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The ~StringStack function is the deconstructor
// ********************************************************
StringStack::~StringStack()
{
    StackNode *nodePtr = nullptr;
    StackNode *nextNode = nullptr;
    nodePtr = top;
    
    while(nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

// ********************************************************
// name:      push
// called by: pushNoun, pushVerb, pushAdj
// passed:    word
// returns:   nothing
// calls:     isEmpty, EXIT_FAILURE
// The push function adds the word into the top of the stack
// ********************************************************
void StringStack::push(string word)
{
    StackNode *newNode = nullptr;
    newNode = new StackNode;
    newNode->value = word;
    
    if(word=="") // Validation for empty word
    {
        cout << "No word was entered\n";
        exit (EXIT_FAILURE);
    }
    else if(word.length()>10) // Validation check for word length
    {
        cout << "That word has too many letters\n";
        exit (EXIT_FAILURE);
    }
    else if(isEmpty()) // Validation check for empty stack
    {
        top = newNode;
        newNode->next = nullptr;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

// ********************************************************
// name:      pop
// called by: popNoun, popVerb, popAdj
// passed:    nothing
// returns:   nothing
// calls:     isEmpty, EXIT_FAILURE
// The pop function removes the top word from the stack
// ********************************************************
void StringStack::pop()
{
    StackNode *temp = nullptr;
    
    if(isEmpty()) // Validation check for empty stack
    {
        cout << "Your Stack is isEmpty\n";
        exit (EXIT_FAILURE);
    }
    else
    {
        temp = top->next;
        delete top;
        top = temp;
    }
}

// ********************************************************
// name:      isEmpty
// called by: pop, popNoun, popVerb, popAdj, push 
// passed:    nothing
// returns:   true/false
// calls:     nothing
// The isEmpty function returns true if the stack is empty
// ********************************************************
bool StringStack::isEmpty()
{
    if(!top) // Validation check for empty stack
    {
        return true;
    }
    else
    {
        return false;
    }
}

// ********************************************************
// name:      display
// called by: displayStacks
// passed:    nothing
// returns:   true/false
// calls:     totalWords
// The display function prints stack in readable format with index
// ********************************************************
void StringStack::display()
{
    int count = totalWords()-1;
    StackNode *current;
    current = top;
    if(!top) // Validation check for empty stack
    {
        cout << "This stack is empty.\n";
        return;
    }
    else
    {
        while(current!=NULL)
        {
            cout << "(" << count << ") " << current->value << endl;
            current = current->next;
            count--;
        }
        cout << endl;
    }
}

// ********************************************************
// name:      totalWords
// called by: display, randWord, story
// passed:    nothing
// returns:   0 or count
// calls:     nothing
// The totalWords function returns the amount of items in the stack
// ********************************************************
int StringStack::totalWords()
{
    int count = 0;
    StackNode *current;
    current = top;
    if(!top) // Validation check for empty stack
    {
        return 0;
    }
    else
    {
        while(current!=NULL)
        {
            current = current->next;
            count++;
        }
        return count;
    }
}

// ********************************************************
// name:      getWord
// called by: nothing
// passed:    i
// returns:   value
// calls:     EXIT_FAILURE
// The getWord function returns the word from specific index of the stack
// ********************************************************
string StringStack::getWord(int i)
{
    int count = 0;
    StackNode *current;
    current = top;
    if(!top) // Validation check for empty stack
    {
        cout << "Your Stack is isEmpty\n";
        exit (EXIT_FAILURE);
    }
    else
    {
        while(count<i)
        {
            current = current->next;
            count++;
        }
        return current->value;
    }
}

// ********************************************************
// name:      randWord
// called by: story
// passed:    nothing
// returns:   value
// calls:     rand, totalWords
// The randWord function returns the word from a random specific index of the stack
// ********************************************************
string StringStack::randWord()
{
    int count = 0;
    StackNode *current;
    current = top;
    if(!top) // Validation check for empty stack
    {
        cout << "Your Stack is isEmpty\n";
        exit (EXIT_FAILURE);
    }
    else
    {
        int index = rand() % totalWords();
        while(count<index)
        {
            current = current->next;
            count++;
        }
        return current->value;
    }
}