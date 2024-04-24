//Truck Class implementation
//Base Class - Vehicle
#include<iostream>
#include<string>
#include<iomanip>

#include "truck.h" //include .h file for Truck Class
using namespace std;



//Default Constructor - if an instance of Truck is created
//without parameters, this will set values for members
Truck::Truck()
{
	manufacturer = "manufacturer";
	year = 2000;
	doors = 4;
	towing = 5000;
}

//Constructor - if an instance of Truck is created with parameters,
//sets member values equal to arguments passed
Truck::Truck(string m, int y, int d, int t)
{
	m = manufacturer;
	y = year;
	d = doors;
	t = towing;
}


//Setters or Mutators - to set member variable
//with the values of arguments passed to them
void Truck::setDoors(int d)
{
	doors = d; //set doors variable
}

void Truck::setTowing(int d)
{
	towing = d; //set towing variable
}

//Getters or Accessors - to retrieve the values stored in the member variables
int Truck::getDoors(int d) const
{
	return doors; //return doors
}

int Truck::getTowing(int d) const
{
	return towing; //return towing capacity
}

void Truck::displayInfo(string m, int y, int d, int t) const //display Truck information
{
	cout << setw(15) << left << "Manufacturer: " << setw(15) << right; getManufacturer(m);
	cout << setw(15) << left << "Year: " << setw(15) << right; getYear(y);
	cout << setw(15) << left << "Number of doors: " << right; getDoors(d);
	cout << setw(15) << left << "Towing capacity in pounds: " << right; getTowing(t);
}
