#pragma once
#include <iostream>
using namespace std;

class FuelGauge
{
private:
	float fuel;		// holds the amount of fuel the car currently has
public:
	FuelGauge();	// default constructor, initializes the amount of fuel to 15.0, which is a full tank
	void gettingMoreFuel();		// stimulates adding fuel to the car
	void burningFuel();
	float getFuelAmount() const;	// returns the current amount of fuel
};

