#ifndef LINEQUEUE_H
#define LINEQUEUE_H
#include <iostream>
#include <string>
using namespace std;

// Access Specifiers
class LineQueue
{
private:
    
    // Stack structure
    struct QueueNode
    {
        string name; // Represents customer
        int ticket; // Represents ticket number
        QueueNode *next; // To point to the next node
    };
    
    QueueNode *front;
    QueueNode *rear;
   
    int newTicket = 415;
    int lineLength = 0;
    
    int countCustomers(QueueNode *);
    void displayCustomers(QueueNode *);
    int getIndex(QueueNode *, string, int);
    string getName(QueueNode *, int);
    
    
    
public:
    // Constructor
    LineQueue()
        {   front = nullptr;   }
    
    // Destructor
    ~LineQueue();
    
    // functions
    void addCustomer(string);
    void order();
    int getCount()
        {   return countCustomers(front);   }
    string draw();
    void getDisplay()
        {   return displayCustomers(front);   }
    void broDeal(string);
    int getTheIndex(string s, int i)
        {   return getIndex(front, s, i);   }
    string getTheName(int i)
        {   return getName(front, i);   }
    void moveToFront(int);
    void dequeue();
};
#endif