// Assignment1.cpp : Defines the entry point for the console application.
//-----------------------------------------------------------------------
// Austin Alloway
// CSC 205-E1
// Assignment 1: Miles Per Gallon
// Purpose: Calculate miles per gallon

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Declare number of gallons, miles before refueling,
	// and caculated Mpg
	int gallons = 15, miles = 375, mpg;

	//calulate the mpg

	mpg = miles / gallons;

	// Display the calculation in desired format.

	cout << "Car holds " << gallons << " gallons of gas." << endl;
	cout << "Total distance travelled is " << miles << " miles." << endl;
	//line break
	cout << endl;
	cout << "Miles per gallon is " << mpg << " ." << endl;
	system("pause");

    return 0;
}

