// Practice2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// variables to holf the regular prices, the
	// amount of a discount, and the sale price
	double regularprice = 59.95, saleprice, discount;

	// calculate the amount of a 20% discount
	discount = regularprice * 0.20;

	// calculate sales price by sebtraction discount
	// from regular price.
	saleprice = regularprice - discount;
	// display the result
	cout << "Regular price: $ " << regularprice << endl;
	system("pause");
	cout << "discount price: $ " << discount << endl;
	system("pause");
	cout << "Sale price: $ " << saleprice << endl;
	system("pause");
    return 0;
}

