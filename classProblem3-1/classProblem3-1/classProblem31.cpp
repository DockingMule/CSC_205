// This program asks the user to enter the length and width of
// a rectangle. It calculates the rectangle's area and displays
// the value on the screen.
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int length, width, area;

	cout << "This program calculates the area of a ";
	cout << "rectangle.\n" << endl;
	cout << "What is the length and width of the rectangle?" <<
		" (Please seperate using a space.): " << endl;
	// input using cin *notice >> instead of <<*
	cin >> length >> width;
	area = length * width
	cout << "The area of the rectangle is " << area << ".\n";
	return 0;
}