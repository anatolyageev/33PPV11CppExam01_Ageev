#pragma once
#include <iostream>
#include <string>
#include"Person.h"
#include "SalaryCalc.h"
#include "SalaryCalcHourlyBesed.h"
#include "SalaryCalkWithBonus.h"
#include "SalaryCalcWithInterest.h"

using namespace std;

enum POSITION
{
	WIPER,
	HANDYMAN,
	PROGRAMMER,
	DRIVER,
	ACOUNTANT,
	FINANCIAL_ANALYST,
	DIRECTOR,
	SALES_MANAGER
};

struct CalcInfo
{
	double base;//база - оклад
	double percent;//значение %
	double total;//сумма продаж  
	double bonus;//бонус
	double bonus_percent;//процент бонуса
	double hour;//количество часов
	double rate_per_hour;//стоимость часа
};


class Employee:public Person, public SalaryCalc
{
protected:
	POSITION position;
	int bankAccount;
	float salary;
	SalaryCalc *salaryCalcFun;
	double base;//база - оклад
	double percent;//значение %
	double total;//сумма продаж 
	double bonus;//бонус
	double bonus_percent;//процент бонуса
	double hour;//количество часов
	double rate_per_hour;//стоимость часа
public:
	POSITION getPosition() { return this->position; }
	virtual double calcSalary()
	{
		if (this->salaryCalcFun == NULL)
			return 0;
		else
			return this->salaryCalcFun->calcSalary();
	}
	int getBankAccount() { return this->bankAccount; }
	float getSalary() { return this->salary; }
	void setPosition(POSITION position) { this->position = position; }
	void setBankAccount(int bancAccount) { this->bankAccount = bancAccount; }
	void setSalary(float salary) { this->salary = salary; }
	friend ostream& operator<<   (ostream& os, Employee& t);
	Employee();
	Employee(POSITION position, int bankAccount, CalcInfo info);
	Employee(const Employee& obj) {}
	static SalaryCalc* createSalarycalcRule(int codePosition, CalcInfo info);
	//Employee* operator=(const Employee& obj);
	~Employee();
};

