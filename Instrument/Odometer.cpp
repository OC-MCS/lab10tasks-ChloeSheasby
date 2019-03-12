#include "Odometer.h" 
#include "FuelGauge.h"
#include <iostream>
using namespace std;

Odometer::Odometer()
{
	mileage = 0;
}

double Odometer::getMileage() const
{
	return mileage;
}

void Odometer::addMile(FuelGauge& f)
{
	if (mileage < 999999)
	{
		mileage++;
	}
	else
	{
		mileage = 0;
	}
	
	if ((mileage % 24) == 0)
		f.burningFuel();
}