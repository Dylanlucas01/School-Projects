#include <iostream>
using namespace std;

void displayMessage()
{
	cout << "Hello World!!! From the function displayMessage.\n";
}

int main()
{
	cout << "Hello World!!! From main.\n";
	displayMessage();
	cout << "Back in function main again.\n";
	return 0;
}