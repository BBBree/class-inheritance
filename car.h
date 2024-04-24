//This file defines a Class Car,
//a Derived Vehicle Class


#pragma once
#ifndef CAR_H //define Car header if not found

#include<iostream>
#include<string>
#include<iomanip>

#include "vehicle.h" //include .h for Base Class Vehicle
using namespace std;


//Class Car is Derived from Base Class Vehicle
//All variables in Vehicle are accessible by Car
class Car : public Vehicle 
{
protected: //Accessible to functions in Derived Classes

	int doors;

public: //Accessible to all Derived Classes and programs

	//Default Constructor
	Car(); //if an instance of Car is created
	//without parameters, this will set values for members

	//Constructor
	Car(string, int, int); //if an instance of Car is created
	//with parameters, sets member values equal to arguments passed

	
	//Setters or Mutators - to set member variable with the values of arguments passed to them
	void setDoors(int); //set doors variable

	//Getters or Accessors - to retrieve the values stored in the member variables
	int getDoors(int) const; //return number of doors
	void displayInfo(string, int, int); //display Car information
};


#endif CAR_H