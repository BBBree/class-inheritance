//Vehicle Class implementation
//A Base Class for any vehicles


#include "vehicle.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


	//Default Constructor - if an instance of Vehicle is created
	//without parameters, this will set a value for private members
	Vehicle::Vehicle() { manufacturer = "manufacturer", year = 2000; }

	//Constructor - if an instance of Vehicle is created with 
	//parameters, this will set the values equal to the arguments passed 
	Vehicle::Vehicle(string m, int y) { manufacturer = m; year = y; }


	//Setters or Mutators - to set member variable with the values of arguments passed to them
	void Vehicle::setManufacturer(string m) { manufacturer = m; }
	void Vehicle::setYear(int y) { year = y; }

	//Getters or Accessors - to retrieve the values stored in the member variables
	string Vehicle::getManufacturer(string m) const { return m; } //return the manufacturer
	int Vehicle::getYear(int y) const { return y; } //return the year

	void Vehicle::displayInfo(string m, int y) const //display information
	{
		cout << setw(15) << left << "Manufacturer: " << setw(15) << right; getManufacturer(m);
		cout << setw(15) << left << "Year: " << setw(15) << right; getYear(y);
	}



