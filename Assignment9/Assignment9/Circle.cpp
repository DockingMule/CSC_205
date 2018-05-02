// Implementation file for the Circle class.
#include "stdafx.h"
#include "Circle.h"   // Needed for the Circle class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;

Circle::Circle()
{
	Radius = 0.0;
	Pi = 3.14159;
}


//-----------NEW-CLASS------------------------------

void Circle::setRadius(double w)
{
	if (w >= 0)
		Radius = w;
	else
	{
		cout << "Invalid radius\n";
		exit(EXIT_FAILURE);
	}
}

//-----------NEW-CLASS------------------------------

double Circle::getRadius() const
{
	return Radius;
}

//-----------NEW-CLASS------------------------------

double Circle::getArea() const
{
	return (pow(Radius,2) * Pi);
}

//-----------NEW-CLASS------------------------------

double Circle::getDiameter() const
{
	return Radius * 2;
}

//-----------NEW-CLASS------------------------------

double Circle::getCircumference() const
{
	return 2 * Pi * Radius;
}