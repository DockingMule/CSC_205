//Austin Alloway
//CSC 205
//Assignment 4: Electric Bill
//Calculate the total cost of an electric bill, With added features!!

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//initiate monthSpelled function located after main
string monthSpelled(int);


int main()
{
	//Declare Variables
	bool goodMonth;
	char again;
	int month, kwh;
	double finalCost, priceDue, serviceCharge = 15.31;

	//do loop for multiple bills
	do {

		//always intitialize goodMonth as true
		goodMonth = true;

		//input month to check
		cout << setw(30) << left << "Enter the month (1-12)" << right << ":";
		cin >> month;

		//Validate 
		if (month < 1 || month > 12)
		{
			cout << "You entered an invalid month\n";
			goodMonth = false;
		}

		if (goodMonth) {
			
			//change month's int to string
			monthSpelled(month);

			// input  kwh used
			cout << setw(30) << left << "Kilowats hours used" << right << ":";
			cin >> kwh;
			system("cls");

			//Calculating KWH used
			if (kwh <= 500)
				priceDue = kwh * (12.9266 / 100);
			else
				priceDue = kwh * (10.9917 / 100);

			//Calculate Final cost
			finalCost = priceDue + serviceCharge;

			//Final outputs
			cout << setw(30) << left << "Month" << right << ":" << monthSpelled(month) << endl;
			cout << setw(30) << left << "Kilowatt hours used" << right << ":" << kwh << endl << endl;
			cout << setw(40) << left << "Service Charge" << right << setprecision(2) << fixed << serviceCharge << endl;
			cout << setw(40) << left << "Kilowatt usage Cost" << right << setprecision(2) << fixed << priceDue << endl;
			cout << setw(40) << left << "Total Bill" << right << "$" << setprecision(2) << fixed << finalCost << endl << endl;
		}
		//Ask if user wants to run again
		cout << "Would you like to enter another bill? (Y/N): ";
		cin >> again;
		again = toupper(again);
		system("cls");

		//error trap
		while ((again != 'Y') && (again != 'N')) {
			cout << "ERROR: Enter Y/N: ";
			cin >> again;
			again = toupper(again);
		}

	} while (again == 'Y'); //end do-while loop


	return 0;
}
//takes in int month (1-12) and converts it to the spelled out
//month name in a string
string monthSpelled(int month) {

	string monthName;

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
		case 12: monthName = "December";
	}
	return monthName;
}
