#pragma once
#include <iostream>
#include <string>
#include "Ship.h"
using namespace std;

class CruiseShip : public Ship
{
private:
	int passengers;		// maximum amount of passengers allowed
public:
	CruiseShip(string n, string y, int p);
	void setPassengers(int p);
	int getPassengers() const;
	void print();		
};
