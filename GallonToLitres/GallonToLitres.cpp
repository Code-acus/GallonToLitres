#include <iostream>

using namespace std;

int main()
{
	//Print the name of the program
	cout<< "Welcome to the Gallon to Litres converter" << endl;

	// Get the number of gallons from the user
	cout << "Enter the number of gallons: ";
	
	// Declare the gallons
	double gallons;
	
	// Get the gallons from the user
	cin >> gallons;

	// Declare the variable to hold the number of litres
	double litres;

	// Declare the conversion factor
	const double CONVERSION_FACTOR = 3.7854;
	
	// Convert the gallons to litres
	litres = gallons * CONVERSION_FACTOR;

	// Print the result
	cout << "The number of litres is: " << litres << endl;

	return 0;
}