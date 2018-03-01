//Austin Alloway
//CSC 205
//Assignment 5: Falling Distance
//Calculate how far an object will free fall given any time

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double g = 9.8;
void getData(double &);
double fallingDistance(double);
void display(double, double);


int main()
{
	double time;
	double distance;
	char response;

	do {
		system("cls");
		getData(time);
		distance = fallingDistance(time);
		display(time, distance);
		cout << "would you like input another data? ";
		cin >> response;
		response = toupper(response);

		//error trap
		while ((response != 'Y') && (response != 'N')) 
		{
			cout << "ERROR: Enter Y/N: ";
			cin >> response;
			response = toupper(response);
		}
	} while (response == 'Y');


    return 0;
}

//---NEW-FUNCTION---------------------------------

//gains user input for time
void getData(double &time) {
	cout << "Enter time (in seconds): ";
	cin >> time;
}

//---NEW-FUNCTION---------------------------------

//computes falling distance
//using inputed time value
double fallingDistance(double time) {
	double distance;
	distance = .5 * (g * pow(time,2));
	return distance;
}

//---NEW-FUNCTION---------------------------------

//display final computations
void display(double time, double distance) {
	system("cls");
	cout << "Falling Time: " << fixed << setprecision(1) << time << " seconds" << endl;
	cout << "Falling Distance: " << fixed << setprecision(1) << distance << " meters" << endl;
}