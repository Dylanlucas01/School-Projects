/* 
*
* Dylan Lucas 
* * Chapter 13, Programming Assignment
* * October 2021 
* 
*/

#include "inventory.h"
#include <stdio.h>
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;

// Global constant
const int SIZE = 5;

int main()
{
    // Initalizing array of inventory objects
    Inventory repairs[SIZE];
    
    // Temp strings to hold input data
    string inputNum, inputDes, inputName, inputPhone, inputPrice, inputHours;
    
    // Loops through array
    // Prompts user for input
    // Validation checks
    // Inputs data into object
    for(int i = 0; i<SIZE; i++)
    {
        cout << "CheckIn Number: ";
        getline(cin, inputNum);
        while(stoi(inputNum)<=0)
        {
            cout << "CheckIn Number must be positive integer\n";
            cout << "CheckIn Number: ";
            getline(cin, inputNum);
        }
        repairs[i].setCheckInNumber(stoi(inputNum));
        
        cout << "Work Description: ";
        getline(cin, inputDes);
        while(inputDes.length()>=30)
        {
            cout << "Work Description must be less than 30 characters\n";
            cout << "Work Description: ";
            getline(cin, inputDes);
        }
        repairs[i].setWorkDescription(inputDes);
        
        cout << "Customer's Last Name: ";
        getline(cin, inputName);
        while(inputName.length()>=30)
        {
            cout << "Custumer's last name must be less than 30 characters\n";
            cout << "Customer's Last Name: ";
            getline(cin, inputName);
        }
        repairs[i].setCustomerLast(inputName);
        
        cout << "Customer's Phone Number: ";
        getline(cin, inputPhone);
        while(inputPhone.length()>=11)
        {
            cout << "Custumer's phone number must be less than 11 characters\n";
            cout << "Customer's Phone Number: ";
            getline(cin, inputPhone);
        }
        repairs[i].setCustPhone(inputPhone);
        
        cout << "Price Quoted: ";
        getline(cin, inputPrice);
        while(atof(inputPrice.c_str())<0)
        {
            cout << "Price quoted can not be less than 0\n";
            cout << "Price Quoted: ";
            getline(cin, inputPrice);
        }
        repairs[i].setPriceQuoted(atof(inputPrice.c_str()));
        
        cout << "Estimated Hours: ";
        getline(cin, inputHours);
        while(atof(inputHours.c_str())<0)
        {
            cout << "Estimated hours can not be less than 0\n";
            cout << "Estimated Hours: ";
            getline(cin, inputHours);
        }
        repairs[i].setEstimatedHours(atof(inputHours.c_str()));
        cout << endl;
    }
    
    // Displays contense of all objects and shows total sum of price
    // I made a display function to make main cleaner
    // My get functions work, I call getPriceQuoted() to sum the total price
    cout << "Washington Acoustic Guitar Repair Shop\n";
    int quoteTotal = 0;
    for(int j = 0; j<SIZE; j++)
    {
        repairs[j].display();
        quoteTotal += repairs[j].getPriceQuoted();
    }
    cout << setw(35) << setfill('-') << "" << endl;
    cout << "Total Quotes: $" << quoteTotal;
    
    return 0;
}
