#pragma once
#include <iostream>
#include <string>

using namespace std;

class AnimalEntity
{
protected:
	bool sex;
	int age;
public:
	int getAge() { return this -> age; }
	void setAge(int age) { this->age = age; }
	bool getSex() { return this->sex; }
	void setSex(bool sex) { this->sex = sex; }
	friend ostream& operator<<   (ostream& os, const AnimalEntity& t);
	AnimalEntity(const AnimalEntity& obj) {}
	AnimalEntity();
	AnimalEntity(bool sex, int age);
	~AnimalEntity();
};

