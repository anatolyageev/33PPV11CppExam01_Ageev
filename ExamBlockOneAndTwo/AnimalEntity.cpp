#include "pch.h"
#include "AnimalEntity.h"


AnimalEntity::AnimalEntity()
{
	this->age = 0;
	this->sex = 0;
}

AnimalEntity::AnimalEntity(bool sex, int age) {
	this->sex = sex;
	this->age = age;
}

AnimalEntity::~AnimalEntity()
{
}

ostream& operator<<   (ostream& os, const AnimalEntity& t)
{
	string sexT;
	sexT = t.sex ? "Mail" : "Femail";
	os <<"Age: "<< t.age << "; Sex: " << sexT << "; ";
	
	return os;
}

