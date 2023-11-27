#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;

// Default constructor
Vehicle::Vehicle()
{}
// Constructor
Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year = y;
}
void Vehicle::displayInfo() // Method to display the contents of the object
{
	cout << "Vehicle Information:" << endl
		 << "Manufacturer: " << getManufacturer() << endl
		 << "Year Built: " << getYear() << endl;
}