#include "pch.h"
#include "SalaryCalcWithInterest.h"


SalaryCalcWithInterest::SalaryCalcWithInterest()
{
}

SalaryCalcWithInterest::SalaryCalcWithInterest(double base, double bonus, double bonus_percent, double percent, double total) {
	this->base = base;
	this->percent = percent;
	this->total = total;
	this->bonus = bonus;
	this->bonus_percent = bonus_percent;
}

SalaryCalcWithInterest::~SalaryCalcWithInterest()
{
}


