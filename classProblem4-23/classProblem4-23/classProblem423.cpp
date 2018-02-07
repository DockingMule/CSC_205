// The switch statement in this program tells the user something
// he or she already knows: what they just entered!
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;
	switch (choice)
	{
	case 'A': cout << "You entered A.\n";
		break;								//Without the breaks it will run through all of them
	case 'B': cout << "You entered B.\n";
		break;
	case 'C': cout << "You entered C.\n";
		break;
	default:  cout << "You did not enter A, B, or C!\n";
	}
	return 0;
}