#pragma once

#include <string>
#include <iostream>

//#include "Computer.h"

class Processor
{
	int chip;
	

public: 
	Processor()
	{
		chip = 0;
	}
	bool IsFunctional(int) const;

};

