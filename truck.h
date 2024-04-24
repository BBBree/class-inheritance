//This file defines a Class Truck,
//a Derived Vehicle Class


#pragma once
#ifndef TRUCK_H //define Truck header if not found

#include<iostream>
#include<string>
#include<iomanip>

#include "vehicle.h" //include .h for Base Class Vehicle

using namespace std;


//Class Truck is Derived from Base Class Vehicle
//All variables in Vehicle are accessible by Truck
class Truck : public Vehicle
{
protected: //Accessible to functions in Derived Classes

	int doors;
	int towing;

public: //Accessible to all Derived Classes and programs

	//Default Constructor
	Truck(); //if an instance of Truck is created
	//without parameters, this will set values for members

	//Constructor
	Truck(string, int, int, int); //if an instance of Truck is created
	//with parameters, sets member values equal to arguments passed


	//Setters or Mutators - to set member variable with the values of arguments passed to them
	void setDoors(int); //set doors variable
	void setTowing(int); //set towing variable

	//Getters or Accessors - to retrieve the values stored in the member variables
	int getDoors(int) const; //return number of doors
	int getTowing(int) const; //return towing capacity
	void displayInfo(string, int, int, int) const; //display Truck information
};


#endif TRUCK_H
