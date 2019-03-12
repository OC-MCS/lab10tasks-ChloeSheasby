#pragma once
#include <iostream>
#include "FuelGauge.h"
using namespace std;

class Odometer
{
private:
	int mileage;		// holds the amount of miles the car has gone so far
public:
	Odometer();		// default constructor initializes the odometer to 0
	double getMileage() const;	// returns the current amount of miles the car has gone
	void addMile(FuelGauge& f);
};

