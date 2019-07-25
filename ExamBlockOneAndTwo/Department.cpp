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
	this->headOfDepartment = "AnyHeadOfDepartment";
	this->employees = test;
}

Department::Department(string departmentName, string headOfDepartment, vector<Employee*> employees) {
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
	os << "Deparnment name: " << t.departmentName << " Head of Department: " << t.headOfDepartment << endl;
	for (int i = 0; i < t.employees.size(); i++) {
		os << *t.employees[i];
	}
//	vector<Employee*>::iterator ptr;
//	cout <<"First member of vector\n"<< *t.employees.begin() <<endl;
//	ptr = t.employees.begin();
//	for (ptr = t.employees.begin(); ptr < t.employees.end(); ptr++)
//		cout << *(*ptr) << " ";//двойное разыменование
	for_each(t.employees.begin(), t.employees.end(), printEmploee);
	//vector<Employee*>::iterator ptr1;
	//for (ptr1 = t.employees.begin(); ptr1 < t.employees.end(); ptr1++)
	//	cout << *(*ptr1) << " ";

	return os;
}