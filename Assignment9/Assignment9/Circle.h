#pragma once
// Specification file for the Circle class.
#ifndef CIRCLE_H
#define CIRCLE_H

// Circle class declaration.

class Circle
{
private:
	double Radius;
	double Pi;
public:
	Circle(); //Default constructor
	void setRadius(double);
	double getRadius() const;
	double getDiameter() const;
	double getArea() const;
	double getCircumference() const;
};

#endif