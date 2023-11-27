#include "inventory.h"
#include <iostream>
#include<cstdlib>
#include <iomanip>
#include <string>
using namespace std;

// ********************************************************
// name:      Inventory
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The Inventory function is the constructor
// sets all variables to 0 or ""
// ********************************************************
Inventory::Inventory()
{
  checkInNumber = 0;
  workDescription = "";
  customerLast = "";
  custPhone = "";
  priceQuoted = 0.0;
  estimatedHours = 0.0;
}

// ********************************************************
// name:      setCheckInNumber
// called by: main
// passed:    num
// returns:   nothing
// calls:     nothing
// The setCheckInNumber function sets the checkInNumber variable
// ********************************************************
void Inventory::setCheckInNumber(int num)
{
  if(num<=0) // Validation check
    {
      cout << "CheckIn Number must be positive integer\n";
      exit (EXIT_FAILURE);
    }
  else
    {
      checkInNumber = num;
    }
}

// ********************************************************
// name:      setWorkDescription
// called by: main
// passed:    description
// returns:   nothing
// calls:     nothing
// The setWorkDescription function sets the workDescription variable
// ********************************************************
void Inventory::setWorkDescription(string description)
{
  if(description.length()>=30) // Validation check
    {
      cout << "Work Description must be less than 30 characters\n";
      exit (EXIT_FAILURE);
    }
  else
    {
      workDescription = description;
    }
}

// ********************************************************
// name:      setCustomerLast
// called by: main
// passed:    last
// returns:   nothing
// calls:     nothing
// The setCustomerLast function sets the customerLast variable
// ********************************************************
void Inventory::setCustomerLast(string last)
{
  if(last.length()>=30) // Validation check
    {
      cout << "Custumer's last name must be less than 30 characters\n";
      exit (EXIT_FAILURE);
    }
  else
    {
      customerLast = last;
    }
}

// ********************************************************
// name:      setCustPhone
// called by: main
// passed:    phone
// returns:   nothing
// calls:     nothing
// The setCustPhone function sets the custPhone variable
// ********************************************************
void Inventory::setCustPhone(string phone)
{
  if(phone.length()>=11) // Validation check
    {
      cout << "Custumer's phone number must be less than 11 characters\n";
      exit (EXIT_FAILURE);
    }
  else
    {
      custPhone = phone;
    }
}

// ********************************************************
// name:      setPriceQuoted
// called by: main
// passed:    price
// returns:   nothing
// calls:     nothing
// The setPriceQuoted function sets the priceQuoted variable
// ********************************************************
void Inventory::setPriceQuoted(float price)
{
  if(price<0) // Validation check
    {
      cout << "Price quoted can not be less than 0\n";
      exit (EXIT_FAILURE);
    }
  else
    {
      priceQuoted = price;
    }
}

// ********************************************************
// name:      setEstimatedHours
// called by: main
// passed:    hours
// returns:   nothing
// calls:     nothing
// The setEstimatedHours function sets the estimatedHours variable
// ********************************************************
void Inventory::setEstimatedHours(float hours)
{
  if(hours<0) // Validation check
    {
      cout << "Estimated hours can not be less than 0\n";
      exit(EXIT_FAILURE);
    }
  else
    {
      estimatedHours = hours;
    }
}

// ********************************************************
// name:      display
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     nothing
// The display function displays the objects information in readable fashion
// ********************************************************
void Inventory::display()
{
  cout << endl;
  cout << setw(30) << left << "CheckIn Number:";
  cout << setw(29) << left << checkInNumber << endl;
  cout << setw(30) << left << "Work Description:";
  cout << setw(29) << left << workDescription << endl;
  cout << setw(30) << left << "Custumer:";
  cout << setw(29) << left << customerLast << endl;
  cout << setw(30) << left << "Phone:";
  cout << setw(29) << left << custPhone << endl;
  cout << setw(30) << left << "Quote to Repair:";
  cout << left << "$" << setw(29) << left << fixed << setprecision(2) << priceQuoted << endl;
  cout << setw(30) << left << "Estimated Hours:";
  cout << setw(29) << left << fixed << setprecision(2) << estimatedHours << endl;
}