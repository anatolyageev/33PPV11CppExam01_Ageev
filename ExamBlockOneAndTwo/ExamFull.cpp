// ExamBlockOneAndTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
//#include <iostream>
//#include"Person.h"
//#include"AdressInfo.h"
//#include"HumanEntity.h"
//#include"Employee.h"
#include"Department.h"



int main()
{
    /*
	AdressInfo testad;
	cout << testad;
	AnimalEntity anomtest;
	cout << "animal"  << endl;
	cout << anomtest;
	cout << "/nHumen" << endl;
	HumanEntity humtest;
	cout << humtest;
	Person personTest;
	cout << personTest;
	Employee empoeetest;
	cout << empoeetest;
	cout << "/nDepartmentTest" << endl;
	Department departmTest;
	cout << departmTest;
	Employee empl;
	
	vector<Department*> depTest;
	Department *dpt1 = new Department();
	Department *dpt2 = new Department();
	depTest.push_back(dpt1);
	depTest.push_back(dpt2);
	vector<Department*>::iterator ptr;
	for (ptr = depTest.begin(); ptr < depTest.end(); ptr++) {
		cout << *(*ptr) << " ";
	}
*/
	vector<Employee*> test;
	Employee *e1 = new Employee();
	Employee *e2 = new Employee();
	test.push_back(e1);
	test.push_back(e2);
	vector<Employee*>::iterator ptr;
	for (ptr = test.begin(); ptr < test.end(); ptr++) {
		cout << *(*ptr);
	}

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
