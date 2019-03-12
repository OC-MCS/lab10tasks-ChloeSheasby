#pragma once
#include "Employee.h"
#include <iostream>
using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPay;
public:
	ProductionWorker(string n, string num, string h, int s, double hP);
	void setShift(int s);
	void setHourlyPay(double hP);
	string getShift() const;		// returns a shift so that the day or night shift is specified
	double getHourlyPay() const;
};

