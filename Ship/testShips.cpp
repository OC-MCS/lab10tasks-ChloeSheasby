#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
using namespace std;

const int NUM_OF_SHIPS = 3;

int main()
{
	Ship* ships[NUM_OF_SHIPS] = { new Ship("Lithuania", "2003"),
		new CruiseShip("Titanic", "1912", 1000000),
		new CargoShip("Brynn Walker", "2000", 23) };

	for (int i = 0; i < NUM_OF_SHIPS; i++)
	{
		cout << "Ship # " << (i + 1) << ":" << endl;
		ships[i]->print();		
		cout << endl << endl;
	}

	return 0;
}