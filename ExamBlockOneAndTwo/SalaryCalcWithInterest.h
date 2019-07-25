#pragma once
#include "SalaryCalc.h"
class SalaryCalcWithInterest
{
	double total; //����� �������
	double percent;
	double base;

public:
	SalaryCalcWithInterest();
	SalaryCalcWithInterest(double base, double percent, double total);
	virtual double SalaryCalc() { return base + total * percent; }
	~SalaryCalcWithInterest();
};