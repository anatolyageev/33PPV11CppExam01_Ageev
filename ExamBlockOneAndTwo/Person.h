#pragma once
#include <iostream>
#include <string>
#include "AdressInfo.h"
#include "HumanEntity.h"

using namespace std;

class Person: public AdressInfo, public HumanEntity
{
private:
	string phoneNumber;
public:
	string getPhoneNumber() { return this->phoneNumber; }
	void setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }
	friend ostream& operator<<   (ostream& os, const Person& t);
	Person();
	Person(bool sex, int age, string name, string surname, string city, string street, int bildingNumber, int flatNumber, string phoneNumber);

	~Person();
};

