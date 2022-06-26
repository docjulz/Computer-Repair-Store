#include "Computer.h"
#include "RAM.h"
#include "Processor.h"

using namespace std;

bool Computer::TurnsOn(int on) const
{
	bool validData = true;
	
	if (on == 1)
	{
		cout << "Computer works fine.\n";
		return true;
	}
	else
		return false;
}
		

bool Computer::RAMTest(int ramTest) const
{
	bool validData = true;

	if (ramTest < 90)
	{
		cout << "Ram works fine.\n";
		return true;
	}
	else
		return false;
}

bool Computer::CPUTest(int cpu) const
{
	bool validData = true;

	if (cpu < 95)
	{
		cout << "CPU works fine.\n";
		return true;
	}
	else
		return false;
}

bool Computer::DriveTest(int drive) const
{
	bool validData = true;

	if (drive < 85)
	{
		cout << "Computer works fine.\n";
		return true;
	}
	else
		return false;
}