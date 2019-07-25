#include "pch.h"
#pragma once
#include "SalaryCalc.h"

class SalaryCalcHourlyBesed: public SalaryCalc
{
	double hour;
	double rate;

public:
	SalaryCalcHourlyBesed();
	SalaryCalcHourlyBesed(double hour, double rate);
	virtual double SalaryCalc() { return hour * rate; }
	~SalaryCalcHourlyBesed();
};

