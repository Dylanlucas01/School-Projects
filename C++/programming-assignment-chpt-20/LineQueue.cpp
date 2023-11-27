#include "LineQueue.h"
#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
#include <cstdlib>
using namespace std;

// ********************************************************
// name:      ~LineQueue
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The ~LineQueue function is the deconstructor
// ********************************************************
LineQueue::~LineQueue()
{
    QueueNode *nodePtr = nullptr;
    QueueNode *nextNode = nullptr;
    // QueueNode = front;
    
    while(nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

void LineQueue::addCustomer(string theName)
{
    if(theName.length()>19)
    {
        cout << "Your name has " << theName.length() - 19 << " too many letters\n";
    }
    else
    {
        QueueNode *newNode = nullptr;
        newNode = new QueueNode;
        newNode->name = theName;
        newNode->ticket = newTicket;
        newNode->next = nullptr;
        if(lineLength = 0)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Welcome to Snow’s - your raffle number is " << newTicket << endl;
        newTicket++;
        lineLength++;
    }
}

void LineQueue::order()
{
    cout << front->name;
    dequeue();
}

int LineQueue::countCustomers(QueueNode *nodePtr)
{
    if(nodePtr != nullptr)
    {
        return 1 + countCustomers(nodePtr->next);
    }
    else
    {
        return 0;
    }
}

string LineQueue::draw()
{
    int winningTicket = rand() % newTicket-1;
    return getName(front, winningTicket);
}

void LineQueue::displayCustomers(QueueNode *nodePtr)
{
    cout << "(" << getIndex(front, nodePtr->name, 0) << ")   ";
    cout << setw(20) << left << nodePtr->name;
    cout << nodePtr->ticket << endl;
    if(nodePtr != nullptr)
    {
        countCustomers(nodePtr->next);
    }
    else
    {
        return;
    }
}

void LineQueue::broDeal(string theName)
{
    int spot = getIndex(front, theName, 0);
    moveToFront(spot);
    
}

int LineQueue::getIndex(QueueNode *nodePtr, string theName, int index)
{
    if(nodePtr != nullptr)
    {
        if(nodePtr->name == theName)
        {
            return index;
        }
        else
        {
            getIndex(nodePtr->next, theName, index++);
        }
    }
    else
    {
        cout << "Nobody named " << theName << " is in the line at this time.\n";
        exit (EXIT_FAILURE);
        //return -1;
    }
}

string LineQueue::getName(QueueNode *nodePtr, int theTicket)
{
    if(nodePtr != nullptr)
    {
        if(nodePtr->ticket = theTicket)
        {
            return nodePtr->name;
        }
        else
        {
            getName(nodePtr->next, theTicket);
        }
    }
    else
    {
        cout << theTicket << "is no longer in line.\n";
        cout << "Redrawing raffle ticket.\n";
        draw();
    }
}

void LineQueue::moveToFront(int index)
{
    int count;
    QueueNode *current = nullptr;
    current = new QueueNode;
    current = front;
    QueueNode *temp = nullptr;
    temp = new QueueNode;
    while(count != index)
    {
        temp = current->next;
        current->next = current;
        current->next;
        count++;
    }
    front = temp;
    cout << front->name << ", you are being moved to the front of the line!\n";
}

void LineQueue::dequeue()
{
    QueueNode *temp = nullptr;
    temp = front;
    front = front->next;
    delete temp;
    lineLength--;
}