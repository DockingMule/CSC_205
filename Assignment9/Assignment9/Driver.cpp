// Assignment9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Circle.h"
using namespace std;


int main()
{
	Circle circle;
	double cirRadius;

	//get radius input from user
	cout << "Please enter the radius of the circle: ";
	cin >> cirRadius;

	//store radius in circle object
	circle.setRadius(cirRadius);

	//Display Circle Data
	cout << "Here is the circle's data:\n";
	cout << "Radius:  " << circle.getRadius() << endl;
	cout << "Diameter: " << circle.getDiameter() << endl;
	cout << "Area: " << circle.getArea() << endl;
	cout << "Circumference: " << circle.getCircumference() << endl;
	return 0;
}

