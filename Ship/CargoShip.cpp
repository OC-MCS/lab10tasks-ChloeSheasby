#include <iostream>
#include <string>
#include "Ship.h"
#include "CargoShip.h"
using namespace std;

CargoShip::CargoShip(string n, string y, int c) : Ship(n, y)
{
	capacity = c;
}

void CargoShip::setCapacity(int c)
{
	capacity = c;
}

int CargoShip::getCapacity() const
{
	return capacity;
}

void CargoShip::print()
{
	cout << "Name: " << getName() << endl;
	cout << "Ship's Capacity: " << capacity << endl;
}