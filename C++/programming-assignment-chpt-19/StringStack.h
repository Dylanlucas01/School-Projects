#ifndef STRINGSTACK_H
#define STRINGSTACK_H
#include <iostream>
#include <string>
using namespace std;

// Access Specifiers
class StringStack
{
private:
    
    // Stack structure
    struct StackNode
    {
        string value; // Represents word
        StackNode *next; // To point to the next node
    };
    
    StackNode *top; // Stack top pointer
    
public:
    // Constructor
    StringStack()
        { top = nullptr; }
    
    // Destructor
    ~StringStack();
    
    // functions
    void push(string);
    void pop();
    bool isEmpty();
    void display();
    int totalWords();
    string getWord(int);
    string randWord();
};
#endif