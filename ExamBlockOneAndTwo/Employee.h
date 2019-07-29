#pragma once
#include <iostream>
#include <string>
#include"Person.h"

using namespace std;

enum POSITION
{
	SWEPPER,
	ACOUNTANT,
	DDIRECTOR

};



class Employee:public Person
{
private:
	string position;
	int bankAccount;
	float salary;
public:
	string getPosition() { return this->position; }
	int getBankAccount() { return this->bankAccount; }
	float getSalary() { return this->salary; }
	void setPosition(string position) { this->position = position; }
	void setBankAccount(int bancAccount) { this->bankAccount = bancAccount; }
	void setSalary(float salary) { this->salary = salary; }
	friend ostream& operator<<   (ostream& os, const Employee& t);
	Employee();
	Employee(string position, int bankAccount, float salary);
	Employee(const Employee& obj) {}
	//Employee* operator=(const Employee& obj);
	~Employee();
};

