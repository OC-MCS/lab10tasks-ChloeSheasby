#include <iostream>
#include <string>
#include "Ship.h"
using namespace std;

Ship::Ship(string n, string y)
{
	name = n;
	year = y;
}

void Ship::setName(string n)
{
	name = n;
}

void Ship::setYear(string y)
{
	year = y;
}

string Ship::getName() const
{
	return name;
}

string Ship::getYear() const
{
	return year;
}

void Ship::print()
{
	cout << "Name: " << name << endl;
	cout << "Year Built: " << year << endl << endl;
}