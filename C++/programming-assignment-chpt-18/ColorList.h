#ifndef COLORLIST_H
#define COLORLIST_H
#include <iostream>
#include <string>
using namespace std;

// Access Specifiers
class ColorList
{
private:
    // Private variables for validation checks
    // Each valid color undercase and capitalized
    string r = "red";
    string b = "blue";
    string y = "yellow";
    string rCap = "Red";
    string bCap = "Blue";
    string yCap = "Yellow";
    
    // List structure
    struct ListNode
    {
        string value; // Represents color
        ListNode *next; // To point to the next node
    };
    
    ListNode *head; // List head pointer
    
public:
    // Constructor
    ColorList()
        { head = nullptr; }
    
    // Destructor
    ~ColorList();
    
    // functions
    void appendColor(string);
    void insertColor(string, int);
    void deleteColor(int);
    void display();
    void reverse();
    void searchColor(string);
    void monochrome();
    void colorCheck(string);
};
#endif