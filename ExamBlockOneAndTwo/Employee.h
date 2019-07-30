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

	CalcInfo(double hour, double rate_per_hour) {
		this->base = 0;
		this->bonus = 0;
		this->bonus_percent = 0;
		this->hour = hour;
		this->percent = 0;
		this->rate_per_hour = rate_per_hour;
		this->total = 0;
	}
	CalcInfo(double base, double bonus, double bonus_percent) {
		this->base = base;
		this->bonus = bonus;
		this->bonus_percent = bonus_percent;
		this->hour = 0;
		this->percent = 0;
		this->rate_per_hour = 0;
		this->total = 0;
	}

	CalcInfo(double base, double bonus, double bonus_percent,double percent, double total) {
		this->base = base;
		this->bonus = bonus;
		this->bonus_percent = bonus_percent;
		this->hour = 0;
		this->percent = percent;
		this->rate_per_hour = 0;
		this->total = total;
	}

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
	Employee(bool sex, int age, string name, string surname, string city, string street, int bildingNumber, int flatNumber, string phoneNumber,POSITION position, int bankAccount, CalcInfo info);
	Employee(const Employee& obj) {}
	static SalaryCalc* createSalarycalcRule(int codePosition, CalcInfo info);
	//Employee* operator=(const Employee& obj);
	~Employee();
};

