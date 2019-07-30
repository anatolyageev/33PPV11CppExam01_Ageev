#include "pch.h"
#include "Department.h"
#include<functional>
#include<algorithm>


Department::Department()
{
	vector<Employee*> test;
	Employee *e1 = new Employee();
	Employee *e2 = new Employee();
	test.push_back(e1);
	test.push_back(e2);
	this->departmentName = "AnyDepartmentName";
	this->employees = test;
}

Department::Department(string departmentName, Employee *headOfDepartment, vector<Employee*> employees) {
	this->departmentName = departmentName;
	this->headOfDepartment = headOfDepartment;
	this->employees = employees;
}


Department::~Department()
{
}

void printEmploee(Employee* elem) { cout << *elem; }

ostream& operator<<   (ostream& os, const Department& t)
{
		os << "Deparnment name: " << t.departmentName << "\nHead of Department: " << *t.headOfDepartment << endl;
		os << "Emploees: " << endl;
		for_each(t.employees.begin(), t.employees.end(), printEmploee);
	return os;
}