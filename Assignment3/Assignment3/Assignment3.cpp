//Austin Alloway
//CSC 205
//Assignment 3: Electric Bill
//Calculate the total cost of an electric bill

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	//Declare Variables
	string monthName;
	int month, kwh;
	double finalCost, priceDue, serviceCharge = 15.31;

	//Gather inputs
	cout << setw(30) << left << "Enter the month (1-12)" << right << ":";
	cin >> month;
	cout << setw(30) << left <<"Kilowats hours used" << right << ":";
	cin >> kwh;
	system("cls");

	//Get monthName by month input
	switch (month) {
		case 1: monthName = "January";
			break;
		case 2: monthName = "February";
			break;
		case 3: monthName = "March";
			break;
		case 4: monthName = "April";
			break;
		case 5: monthName = "May";
			break;
		case 6: monthName = "June";
			break;
		case 7: monthName = "July";
			break;
		case 8: monthName = "August";
			break;
		case 9: monthName = "September";
			break;
		case 10: monthName = "October";
			break;
		case 11: monthName = "November";
			break;
		case 12: monthName = "December";}

	//Calculating KWH used
	if (kwh <= 500)
		priceDue = kwh * (12.9266 / 100);
	else
		priceDue = kwh * (10.9917 / 100);

	//Calculate Final cost
	finalCost = priceDue + serviceCharge;

	//Final outputs
	cout << setw(30) << left << "Month" << right << ":" << monthName << endl;
	cout << setw(30) << left << "Kilowatt hours used" << right << ":" << kwh << endl << endl;
	cout << setw(40) << left << "Service Charge" << right << setprecision(2) << fixed << serviceCharge << endl;
	cout << setw(40) << left << "Kilowatt usage Cost" << right << setprecision(2) << fixed << priceDue << endl;
	cout << setw(40) << left << "Total Bill" << right << "$" << setprecision(2) << fixed << finalCost << endl << endl;
    return 0;
}

