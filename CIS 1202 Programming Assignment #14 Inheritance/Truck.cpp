#include "Truck.h"
#include <string>
#include <iostream>
using namespace std;

// Default constructor
Truck::Truck()
{}
// Constructor
Truck::Truck(string m, int y, int tC)
	{
	    manufacturer = m;
	    year = y;
	    towingCapacity = tC;
	}

void Truck::displayInfo() // Method to display the contents of the object
{
	cout << "Vehicle Information:" << endl
	     << "Manufacturer: " << getManufacturer() << endl
	     << "Year Built: " << getYear() << endl
	     << "Towing capacity: " << getTowingCapacity() << endl;
}
