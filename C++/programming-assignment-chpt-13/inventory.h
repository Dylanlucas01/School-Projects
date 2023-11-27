#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
using namespace std;

// Access Specifiers
class Inventory
{
private:
    // Private varables
    int checkInNumber;
    string workDescription;
    string customerLast;
    string custPhone;
    float priceQuoted;
    float estimatedHours;
public:
    // Public member functions
    Inventory(); // Constructor
    void setCheckInNumber(int);
    void setWorkDescription(string);
    void setCustomerLast(string);
    void setCustPhone(string);
    void setPriceQuoted(float);
    void setEstimatedHours(float);
    void display();
    // Inline member functions
    int getCheckInNumber() const
        { return checkInNumber; }
    string getWorkDescription()const
        { return workDescription; }
    string getCustomerLast()const
        { return customerLast; }
    string getCustPhone()const
        { return custPhone; }
    float getPriceQuoted()const
        { return priceQuoted; }
    float getEstimatedHours()const
        { return estimatedHours; }
};
#endif