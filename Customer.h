#pragma once

#include <string>

using namespace std;

class Customer
{
	string customerFirst;
	string customerLast;
	string chipName;
	double chipVersion;
	int gigahertz;
	int driveSize;
	string driveType;
	int ramAmount;

public:

	Customer(string f, string l, string n, double v, int g, int s, string t, int a)
	{
		customerFirst = f;
		customerLast = l;
		chipName = n;
		chipVersion = v;
		gigahertz = g;
		driveSize = s;
		driveType = t;
		ramAmount = a;
	};

	void print();
};

