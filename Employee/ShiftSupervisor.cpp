#include <iostream>
#include "Employee.h"
#include "ShiftSupervisor.h"
#include<string>
using namespace std;

ShiftSupervisor::ShiftSupervisor(string n, string num, string h, double s, double b) : Employee(n, num, h)
{
	annualSalary = s;
	annualBonus = b;
}

void ShiftSupervisor::setSalary(double s) 
{
	annualSalary = s;
}

void ShiftSupervisor::setBonus(double b)
{
	annualBonus = b;
}

double ShiftSupervisor::getSalary() const
{
	return annualSalary;
}

double ShiftSupervisor::getBonus() const
{
	return annualBonus;
}