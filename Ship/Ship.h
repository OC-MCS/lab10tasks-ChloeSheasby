#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ship
{
private:
	string name;
	string year;
public:
	Ship(string n, string y);
	void setName(string n);
	void setYear(string y);
	string getName() const;
	string getYear() const;
	virtual void print();
};
