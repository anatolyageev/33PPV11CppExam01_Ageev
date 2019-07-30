#include "pch.h"
#include "Employee.h"


Employee::Employee()
{
	this->position = WIPER;
	this->salary = 100.0;
	this->bankAccount = 0000000000;
}

Employee::~Employee()
{
}


Employee::Employee(POSITION position, int bankAccount, CalcInfo info) {
	this->position = position;
	this->bankAccount = bankAccount;
	this->base = info.base;
	this->total = info.bonus;
	this->percent = info.percent;
	this->hour = info.hour;
	this->rate_per_hour = info.rate_per_hour;

}

SalaryCalc * Employee::createSalarycalcRule(int codePosition, CalcInfo info){
	SalaryCalc* salaryCalcFun = NULL;
	switch (codePosition)
	{
	case 1:case 2:case 3:case 4: salaryCalcFun = new SalaryCalcHourlyBesed(info.hour, info.rate_per_hour); break;
	case 5:case 6: salaryCalcFun = new SalaryCalkWithBonus(info.base, info.bonus_percent,info.bonus); break;
	case 7:case 8: salaryCalcFun = new SalaryCalcWithInterest(info.base, info.percent,info.total); break;
	default: salaryCalcFun = new SalaryCalcHourlyBesed(info.hour, info.rate_per_hour);
		break;

		return salaryCalcFun;
	}
}




ostream& operator<<   (ostream& os, Employee& t)
{
	os << t.name << " " << t.surname << endl;
	os << " Position: " << t.position << " Salarry: " << t.calcSalary() << endl;
	os << "Bank Account: " << t.bankAccount<<endl;
	
	return os;
}
/*
Employee* Employee :: operator=(const Employee& obj) {
	bankAccount = obj.bankAccount;
	position = obj.position;
	salary = obj.salary;
	return this;
}
*/