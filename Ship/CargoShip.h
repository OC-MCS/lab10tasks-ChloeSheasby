#pragma once
#include <iostream>
#include <string>
#include "Ship.h"

class CargoShip : public Ship
{
private:
	int capacity;		// cargo capacity in tons
public:
	CargoShip(string n, string y, int c);
	void setCapacity(int c);
	int getCapacity() const;
	void print();
};
