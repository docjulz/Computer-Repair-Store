#include "Customer.h"
#include <string>
#include <iostream>
using namespace std;

void Customer::print()
{
	
	cout << "Customer Info:" << endl;
	cout << "First name: " << customerFirst << endl;
	cout << "Last name: " << customerLast << endl;
	cout << "Chip name: " << chipName << endl;
	cout << "Chip version: " << chipVersion << endl;
	cout << "Gigahertz: " << gigahertz << "gHz" << endl;
	cout << "Drive size: " << driveSize << "GB" << endl;
	cout << "Drive type: " << driveType << endl;
	cout << "RAM Amount: " << ramAmount << " MB" << endl;
}