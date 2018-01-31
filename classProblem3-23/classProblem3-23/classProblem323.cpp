// This program successfully uses both
// cin >> and cin.get() for keyboard input.
#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	//Using cin.ignore() the program doesnt read the null value after number
	//test with and without ignore.
	//It will take the null value as the input for character
	cin.ignore();
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank You!\n";
	return 0;
}