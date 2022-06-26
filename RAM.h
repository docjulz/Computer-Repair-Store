#pragma once
#include <iostream>


class RAM
{
	int gigabites;

public:
	RAM()
	{
		gigabites = 0;
	}
	bool IsFunctional(int test) const;
};

