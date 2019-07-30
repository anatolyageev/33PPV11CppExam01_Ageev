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


Employee::Employee(bool sex, int age, string name, string surname, string city, string street, int bildingNumber, int flatNumber, string phoneNumber,POSITION position, int bankAccount, CalcInfo info)
	:Person( sex,  age,  name,  surname,  city,  street,  bildingNumber,  flatNumber,  phoneNumber)
{
	this->position = position;
	this->bankAccount = bankAccount;
	this->base = info.base;
	this->total = info.bonus;
	this->percent = info.percent;
	this->hour = info.hour;
	this->rate_per_hour = info.rate_per_hour;
	this->salaryCalcFun = createSalarycalcRule(position, info);
}

SalaryCalc * Employee::createSalarycalcRule(int codePosition, CalcInfo info){
	SalaryCalc* salaryCalcFun = NULL;
	switch (codePosition)
	{
	case 0:case 1:case 2:case 3: salaryCalcFun = new SalaryCalcHourlyBesed(info.hour, info.rate_per_hour); break;
	case 4:case 5: salaryCalcFun = new SalaryCalkWithBonus(info.base, info.bonus_percent,info.bonus); break;
	case 6:case 7: salaryCalcFun = new SalaryCalcWithInterest(info.base,info.bonus,info.bonus_percent, info.percent,info.total); break;
	default: salaryCalcFun = new SalaryCalcHourlyBesed(info.hour, info.rate_per_hour);
		break;

		return salaryCalcFun;
	}
}

ostream& operator<<   (ostream& os, Employee& t)
{
	os << (Person&)t;
	os << " Position: " << t.position << "; Salarry: " << t.calcSalary();
	os << "; Bank Account: " << t.bankAccount << endl;
	return os;
}
