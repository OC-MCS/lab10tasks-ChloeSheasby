#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;

int main()
{
	FuelGauge f;
	Odometer o;

	for (int i = 0; i < 2; i++)
	{
		f.gettingMoreFuel();
	}
	cout << "The car currently has " << f.getFuelAmount() << " gallons." << endl << endl;

	while(f.getFuelAmount() != 0)
	{
		o.addMile(f);
		cout << "The car currently has " << f.getFuelAmount() << " gallons" << endl;
		cout << "and has gone " << o.getMileage() << " miles." << endl << endl;
	}

	return 0;
}