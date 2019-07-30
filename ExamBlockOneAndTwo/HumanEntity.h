#pragma once
#include <iostream>
#include <string>
#include "AnimalEntity.h"

using namespace std;

class HumanEntity: public AnimalEntity
{
protected:
	string name;
	string surname;

public:
	string getName() { return this->name; }
	string getSurname() { return this->surname; }
	void seName(string name) { this->name = name; }
	void setSurname(string surname) { this->surname = surname; }
	friend ostream& operator<<   (ostream& os, const HumanEntity& t);
	HumanEntity();
	HumanEntity(bool sex, int age, string name, string surname);

	~HumanEntity();
};

