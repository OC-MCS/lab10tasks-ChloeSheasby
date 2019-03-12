#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;

Employee::Employee(string n, string num, string h)
{
	name = n;
	number = num;
	hireDate = h;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setNumber(string num)
{
	number = num;
}

void Employee::setHireDate(string h)
{
	hireDate = h;
}

string Employee::getName() const
{
	return name;
}

string Employee::getNumber() const
{
	return number;
}

string Employee::getHireDate() const
{
	return hireDate;
}
