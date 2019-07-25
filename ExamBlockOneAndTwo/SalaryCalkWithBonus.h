#pragma once
#include "SalaryCalc.h"

class SalaryCalkWithBonus: public SalaryCalc
{
	double base;
	double percent;
	double bonus;

public:
	SalaryCalkWithBonus();
	SalaryCalkWithBonus(double base, double percent, double bonus);
	virtual double SalaryCalc() { return base + bonus* percent; }
	~SalaryCalkWithBonus();
};

