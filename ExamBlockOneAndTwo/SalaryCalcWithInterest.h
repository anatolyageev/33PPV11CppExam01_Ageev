#pragma once
#include "SalaryCalc.h"
class SalaryCalcWithInterest: public SalaryCalc
{
	double total; //общая выручка
	double percent;
	double base;

public:
	SalaryCalcWithInterest();
	SalaryCalcWithInterest(double base, double percent, double total);
	virtual double calcSalary() { return base + total * percent; }
	~SalaryCalcWithInterest();
};
