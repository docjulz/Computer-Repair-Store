#include "Drive.h"

#include <iostream>

using namespace std;

bool Drive::IsFunctional(int harddrive) const
{
	bool validData = true;
	int selection;

	cout << "Would you like to replace your RAM? 1 for yes, 2 for no: ";
	cin >> selection;

	if (selection == 1)
	{
		cout << "You have selected new ram" << endl;
		return true;
	}
	else
		return false;
}
