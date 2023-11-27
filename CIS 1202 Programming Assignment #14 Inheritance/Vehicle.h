#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;

// Vehicle class declaration
class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	// Default constructor
	Vehicle();
	
	// Constructor
	Vehicle(string m, int y);

	// Accessors
        string getManufacturer() const
	{
		return manufacturer;
	}

	int getYear() const
	{
		return year;
	}

	void displayInfo(); // Method to display the contents of the object
};

#endif
