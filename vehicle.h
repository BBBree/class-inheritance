//This file defines a Class type Vehicle, designed as a 
//Base Class for Derivative Classes such as Car, Truck, etc.


#pragma once
#ifndef VEHICLE_H //define Vehicle header if not found

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;



class Vehicle
{
protected: //Accessible to functions in Derived Classes

	string manufacturer;
	int year;

public: //Accessible to all Derived Classes and programs

	//Default Constructor
	Vehicle();//if an instance of Vehicle is created
	//without parameters, this will set values for members

	//Constructor
	Vehicle(string, int); //if an instance of Vehicle is created
	//with parameters, sets member values equal to arguments passed


	//Setters or Mutators - to set member variable with the values of arguments passed to them
	void setManufacturer(string); //set manufacturer variable
	void setYear(int); //set year variable

	//Getters or Accessors - to retrieve the values stored in the member variables
	string getManufacturer(string) const; //return manufacturer
	int getYear(int) const; //return year
	void displayInfo(string, int) const; //display Vehicle information
};



#endif VEHICLE_H