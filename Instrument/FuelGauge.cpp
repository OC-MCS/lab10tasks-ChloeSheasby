#include "FuelGauge.h"
#include <iostream>
using namespace std;

FuelGauge::FuelGauge()
{
	fuel = 0;
}

void FuelGauge::gettingMoreFuel()
{
	if (fuel < 15)
	{
		fuel++;
	}
	else
		cout << "The tank is full at 15 gallons of fuel." << endl;
}

void FuelGauge::burningFuel()
{
	if (fuel > 0)
		fuel--;
	else
		cout << "The tank is empty!!" << endl;
}

float FuelGauge::getFuelAmount() const
{
	return fuel;
}