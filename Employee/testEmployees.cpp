#include<iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include <string>
using namespace std;

int main()
{
	ProductionWorker p1("Chloe", "1537512", "09/13/2000", 1, 13.75);

	cout << "Production Worker #1:" << endl;
	cout << "Name: " << p1.getName() << endl;
	cout << "Number: " << p1.getNumber() << endl;
	cout << "Hire Date: " << p1.getHireDate() << endl;
	cout << "Shift: " << p1.getShift() << endl;
	cout << "Hourly Pay: $" << p1.getHourlyPay() << endl << endl;

	//ProductionWorker p2;
	//p2.setName("Joseph");
	//p2.setNumber("1234567");
	//p2.setHireDate("02/10/2004");
	//p2.setShift(2);
	//p2.setHourlyPay(10.01);

	//cout << "Production Worker #2:" << endl;
	//cout << "Name: " << p2.getName() << endl;
	//cout << "Number: " << p2.getNumber() << endl;
	//cout << "Hire Date: " << p2.getHireDate() << endl;
	//cout << "Shift: " << p2.getShift() << endl;
	//cout << "Hourly Pay: $" << p2.getHourlyPay() << endl << endl;

	ShiftSupervisor s1("Chloe", "1537512", "09/13/2000", 100000, 2500);

	cout << "Shift Supervisor #1:" << endl;
	cout << "Name: " << s1.getName() << endl;
	cout << "Number: " << s1.getNumber() << endl;
	cout << "Hire Date: " << s1.getHireDate() << endl;
	cout << "Annual Salary: $" << s1.getSalary() << endl;
	cout << "Annual Bonus: $" << s1.getBonus() << endl << endl;

	return 0;
}