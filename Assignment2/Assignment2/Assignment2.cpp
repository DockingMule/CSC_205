//Austin Alloway
//CSC 205
//Assignment 2: Intrest Earned
// Compute the interest earned on a principal and the total amount

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double principal, rate, totalAmount, interestAmount;
	int t;									// t is the amount of times the intrest is compounded per year
	//inputs
	cout << "Enter the principal amount          : ";
	cin >> principal; 
	cout << "Enter the Interest rate (in percent): ";
	cin >> rate;
	cout << "Enter the times compounded          : ";
	cin >> t;
	// calculations
	totalAmount = principal * pow((1 + rate / 100 / t), t);
	interestAmount = totalAmount - principal;
	// outputs
	system("cls");
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(60) << "Interest Rate:" << right << rate << "%" << endl;
	cout << left << setw(60) << "Times Compounded:" << right <<  t << endl;
	//principal output
	cout << left << setw(60) << "Principal:" << right << "$ " << principal << endl << endl;
	//interest Amount output
	cout << left << setw(60) << "Interest Amount:" << right << "$ " << interestAmount << endl;
	//total Amount output
	cout << left << setw(60) << "Total Amount:" << right << "$ " << totalAmount << endl;



    return 0;
}

