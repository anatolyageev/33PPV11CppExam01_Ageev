#include "pch.h"
#include "SalaryCalkWithBonus.h"


SalaryCalkWithBonus::SalaryCalkWithBonus()
{
}
SalaryCalkWithBonus::SalaryCalkWithBonus(double base, double percent, double bonus) {
	this->base = base;
	this->percent = percent;
	this->bonus = bonus;
}

SalaryCalkWithBonus::~SalaryCalkWithBonus()
{
}
