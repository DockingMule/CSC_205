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
	cout << "Enter the times compouned           : ";
	cin >> t;
	// calculations
	totalAmount = principal * pow((1 + rate / 100 / t), t);
	interestAmount = totalAmount - principal;
	// outputs
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(18) << "Interest Rate:" << right <<setw(20) << rate << "%" << endl;
	cout << left << setw(18) << "Times Compounded:" << right << setw(20) << t << endl;
	cout << left << setw(18) << "Principal:" << right << setw(20) << "$ " << principal << endl << endl;
	cout << left << setw(18) << "Interest Amount:" << right << setw(20) << interestAmount << endl;
	cout << left << setw(18) << "Total Amount:" << right << setw(20) << totalAmount << endl;



    return 0;
}

