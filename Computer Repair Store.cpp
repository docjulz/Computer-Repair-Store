//  Micro Center Computer Repair program.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Processor.h"
#include "Computer.h"
#include "RAM.h"
#include "Drive.h"
#include "Customer.h"

using namespace std;

int main()
{
	cout << "******************************************\n";
	cout << "** Micro Center Computer repair station **\n";
	cout << "******************************************\n"; 

	Computer comp;
	RAM memory;
	Processor cpu;
	Drive hd;
	Customer person1 ("TIM", "Smith", "Intel", 1.8, 3.2, 900, "SSD", 16);
	int on, ram, cpu1;
	int test1;
	int okay1 = 0;
	int okay2 = 0;
	int okay3 = 0;

	person1.print();

	const int size = 3;

	int array[size];

	srand((unsigned)time(0));

	for (int i = 0; i < size; i++)
	{
		array[i] = (rand() % 100) + 1;
	}
	cout << endl;
	do
	{
		if (!comp.RAMTest(array[0]))
		{
			cout << "RAM FAILED.\n";
			memory.IsFunctional(okay1);
		}

		if (!comp.CPUTest(array[1]))
		{
			cout << "CPU FAILED.\n";
			cpu.IsFunctional(okay2);
		}
		if (!comp.DriveTest(array[2]))
		{
			cout << "Drive FAILED.\n";
			hd.IsFunctional(okay3);
		}
	} while (!true);
	
	cout << "\nYour computer works fine now." << endl;
	return 0;
}