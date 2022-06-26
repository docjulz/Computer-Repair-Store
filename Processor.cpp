#include "Processor.h"
#include <iostream>


using namespace std;

bool Processor::IsFunctional(int chips) const
{
	bool validData = true;
	int selection;

	cout << "Would you like to replace your CPU? 1 for yes, 2 for no: ";
	cin >> selection;

	if (selection == 1)
	{
		cout << "You have selected new CPU" << endl;
		return true;
	}
	else
		return false;
}