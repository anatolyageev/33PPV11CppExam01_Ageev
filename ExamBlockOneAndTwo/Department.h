#pragma once
#include <iostream>
#include <string>
#include<list>
#include<vector>
#include"Employee.h"

using namespace std;
class Department
{

	string departmentName;
	string headOfDepartment;
	vector<Employee*> employees;

public:
	string getDepartmentName() { return this->departmentName; }
	string getHeadOfDepartment() { return this->headOfDepartment; }
	vector<Employee*> getEmployees() { return this->employees; }
	void setDepartmentName(string departmentName) { this->departmentName = departmentName; }
	void setHeadOfDepartment(string headOfDepartment) { this->departmentName = headOfDepartment; }
	void setEmployees(vector<Employee*> employees) { this->employees = employees; }
	friend ostream& operator<<   (ostream& os, const Department& t);
	vector<Employee*>::iterator ptr;
	Department();
	Department(string departmentName, string headOfDepartment, vector<Employee*> employees);
	Department(const Department& obj) {}
	~Department();
};

