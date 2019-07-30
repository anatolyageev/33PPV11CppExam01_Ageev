#pragma once
#include "SalaryCalc.h"
class SalaryCalcWithInterest: public SalaryCalc
{
	double total; //общая выручка
	double percent;
	double base;
	double bonus;
	double bonus_percent;

public:
	SalaryCalcWithInterest();
	SalaryCalcWithInterest(double base, double bonus, double bonus_percent, double percent, double total);
	virtual double calcSalary() { return (base + total * percent + bonus*bonus_percent); }
	~SalaryCalcWithInterest();
};
