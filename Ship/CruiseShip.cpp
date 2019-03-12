#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
using namespace std;

CruiseShip::CruiseShip(string n, string y, int p) : Ship(n, y)
{
	passengers = p;
}

void CruiseShip::setPassengers(int p)
{
	passengers = p;
}

int CruiseShip::getPassengers() const
{
	return passengers;
}

void CruiseShip::print()
{
	cout << "Name: " << getName() << endl;	
	cout << "Maximum Passengers: " << passengers << endl;
}