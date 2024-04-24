//Car Class implementation
//Base Class - Vehicle
#include<iostream>
#include<string>
#include<iomanip>

#include "car.h" //include .h file for Car Class
using namespace std;



//Default Constructor - if an instance of Car is created
//without parameters, this will set values for members
Car::Car()
{
	manufacturer = "manufacturer";
	year = 2000;
	doors = 4;
}

//Constructor - if an instance of Car is created with parameters,
//sets member values equal to arguments passed
Car::Car(string m, int y, int d)
{
	m = manufacturer;
	y = year;
	d = doors;
}


//Setters or Mutators - to set member variable
//with the values of arguments passed to them
void Car::setDoors(int d)
{
	doors = d; //set doors variable
}

//Getters or Accessors - to retrieve the values stored in the member variables
int Car::getDoors(int d) const
{
	return doors; //return doors
}

void Car::displayInfo(string m, int y, int d) //display Car information
{
	cout << setw(15) << left << "Manufacturer: " << setw(15) << right; getManufacturer(m);
	cout << setw(15) << left << "Year: " << setw(15) << right; getYear(y);
	cout << setw(15) << left << "Number of doors: " << right; getDoors(d);
}
