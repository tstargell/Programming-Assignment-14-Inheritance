#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace std;


// Car class declaration
class Car
{
private:
        // Member variables
	string manufacturer;
	int year, doors;
public:
	// Default constructor
	Car();

	// Constructor
	Car(string m, int y, int d);

	// Accessors
	string getManufacturer() const
	{
		return manufacturer;
	}

	int getYear() const
	{
		return year;
	}

	int getDoors() const
	{
		return doors;
	}

	void displayInfo(); // Method to display the contents of the object
};

#endif
