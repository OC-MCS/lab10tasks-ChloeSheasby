#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class ShiftSupervisor : public Employee
{
private:
	double annualSalary;
	double annualBonus;
public:
	ShiftSupervisor(string n, string num, string h, double s, double b);
	void setSalary(double s);
	void setBonus(double b);
	double getSalary() const;
	double getBonus() const;
};
