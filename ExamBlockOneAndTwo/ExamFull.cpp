// ExamBlockOneAndTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include"Department.h"


int main()
{
 
	CalcInfo HourlySalary(8,100);
	CalcInfo SalaryBonus(1000,1000,0.5);
	CalcInfo SalaryInterest(1000,1000,0.1,0.2,100000);
	
	
	Employee *emplTest1 = new Employee(true, 41, "Vasiliy", "Sidorov", "Kharkov", "Solnechnaya", 345, 1, "+38050000001", DIRECTOR, 983429368, SalaryInterest);
	Employee *emplTest2 = new Employee(true, 45, "Petr", "Ivanov", "Kharkov", "Pushkinskaya", 45, 5, "+38050000002", DIRECTOR, 234673377, SalaryInterest);

	vector<Employee*> testEmplVector1;
	Employee *e1 = new Employee(true, 21, "Ivan", "Petrov", "Kharkov", "Cvetocnaya", 2, 4, "+38050000011", PROGRAMMER, 1298979997, HourlySalary);
	Employee *e2 = new Employee(false, 25, "Maria", "Ivanova", "Kiev", "Lermontovskaya", 26, 28, "+380660000023",ACOUNTANT,987974939,SalaryBonus);
	testEmplVector1.push_back(e1);
	testEmplVector1.push_back(e2);

	vector<Employee*> testEmplVector2;
	Employee *e21 = new Employee(true, 21, "Vasiliy", "Petrovich", "Kharkov", "Shevchenko", 23, 43, "+38050006011", DRIVER, 1298229997, HourlySalary);
	Employee *e22 = new Employee(false, 25, "Anna", "Shmit", "Kharkov", "Sobornaya", 2, 29, "+380660005023", ACOUNTANT, 987974939, SalaryBonus);
	testEmplVector2.push_back(e21);
	testEmplVector2.push_back(e22);

	vector<Department*> depTest;
	Department *departmTest1 = new Department("Sales", emplTest1, testEmplVector1);
	Department *departmTest2 = new Department("Transport", emplTest2, testEmplVector2);
	depTest.push_back(departmTest1);
	depTest.push_back(departmTest2);
	vector<Department*>::iterator ptr;
	for (ptr = depTest.begin(); ptr < depTest.end(); ptr++) {
		cout << *(*ptr) << " ";
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
