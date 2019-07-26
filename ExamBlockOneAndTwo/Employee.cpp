#include "pch.h"
#include "Employee.h"


Employee::Employee()
{
	this->position = "AnyPosition";
	this->salary = 0.0;
	this->bankAccount = 0000000000;
}

Employee::Employee(string position, int bankAccount, float salary) {
	this->position = position;
	this->bankAccount = bankAccount;
	this->salary = salary;
}


Employee::~Employee()
{
}

ostream& operator<<   (ostream& os, const Employee& t)
{
	os << t.name << " " << t.surname << endl;
	os << " Position: " << t.position << " Salarry: " << t.salary << endl;
	os << "Bank Account: " << t.bankAccount<<endl;
	
	return os;
}
/*
Employee* Employee :: operator=(const Employee& obj) {
	bankAccount = obj.bankAccount;
	position = obj.position;
	salary = obj.salary;
	return this;
}
*/