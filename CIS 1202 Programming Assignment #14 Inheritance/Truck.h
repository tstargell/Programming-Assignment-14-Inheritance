#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include <iostream>
using namespace std;


// Truck class declaration
class Truck
{
private:
        // Member variables
	string manufacturer;
	int year, towingCapacity;
public:
	// Default constructor
	Truck();

	// Constructor
	Truck(string m, int y, int tC);	

	// Accessors
	string getManufacturer() const
	{
		return manufacturer;
	}

	int getYear() const
	{
		return year;
	}

	int getTowingCapacity() const
	{
		return towingCapacity;
	}

	void displayInfo(); // Method to display the contents of the object
};

#endif
