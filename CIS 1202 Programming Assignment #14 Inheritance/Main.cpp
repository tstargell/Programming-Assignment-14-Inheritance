#include <string>
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
	string manufacturer;
	int year, doors, towingCapacity;

	// Gets input from the user for manufacturer and year built, then stores this information in a Vehicle object. 
	// Calls the displayInfo method and displays it on the output.
	cout << "Vehicle Program" << endl;
	cout << " " << endl;
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cin.ignore();
	Vehicle newVehicle(manufacturer, year);
	newVehicle.displayInfo();

	// Gets input from the user for manufacturer, year built, and number of doors, then stores this information in a Car object. 
	// Calls the displayInfo method and displays it on the output.
	cout << " " << endl;
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	cin.ignore();
	Car newCar(manufacturer, year, doors);
	newCar.displayInfo();

	// Gets input from the user for manufacturer, year built, and towing capacity, then stores this information in a Truck object.
	// Calls the displayInfo method and displays it on the output.
	cout << " " << endl;
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	cin.ignore();
	Truck newTruck(manufacturer, year, towingCapacity);
	newTruck.displayInfo();

	return 0;
}
