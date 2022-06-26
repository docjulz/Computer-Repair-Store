#pragma once
#include <iostream>

#include "Processor.h"

class Computer
{
	int works;
	int ramTest;
	int cpu;
	int drive;	

public:
	Computer()
	{
		works = 0;
		ramTest = 0;
		cpu = 0;
		drive = 0;
	}
	bool TurnsOn(int a) const;
	bool RAMTest(int b) const;
	bool CPUTest(int c) const;
	bool DriveTest(int d) const;

};

