#include "ProductionWorker.h"
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

ProductionWorker::ProductionWorker(string n, string num, string h, int s, double hP) : Employee(n, num, h)
{
	shift = s;
	hourlyPay = hP;
}

void ProductionWorker::setShift(int s)
{
	if (s != 1 && s != 2)
	{
		cout << "Error! Please pick 1 for the day shift and 2 for the night shift." << endl;
	}
	else
		shift = s;
}

void ProductionWorker::setHourlyPay(double hP)
{
	hourlyPay = hP;
}

string ProductionWorker::getShift() const
{
	string s;		// holds the string for the shift

	if (shift == 1)
		s = "day";
	else
		s = "night";

	return s;
}

double ProductionWorker::getHourlyPay() const
{
	return hourlyPay;
}