#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

// Default constructor
Car::Car()
{}
// Constructor
Car::Car(string m, int y, int d)
	{
	    manufacturer = m;
	    year = y;
	    doors = d;
	}
void Car::displayInfo() // Method to display the contents of the object
{
	cout << "Vehicle Information:" << endl
	     << "Manufacturer: " << getManufacturer() << endl
	     << "Year Built: " << getYear() << endl
	     << "Doors: " << getDoors() << endl;
}
