#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	string name;
	string number;
	string hireDate;	// this is a string so that the date can be inputted as such: MM/DD/YYYY
public:
	Employee(string n, string num, string h);
	void setName(string n);
	void setNumber(string num);
	void setHireDate(string h);
	string getName() const;
	string getNumber() const;
	string getHireDate() const;
};

