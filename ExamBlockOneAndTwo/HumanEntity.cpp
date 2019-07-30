#include "pch.h"
#include "HumanEntity.h"


HumanEntity::HumanEntity()
{
	this->name = "Anyname";
	this->surname = "AnySurname";
}

HumanEntity::HumanEntity(bool sex, int age, string name, string surname):AnimalEntity(sex,age) {
	this->name = name;
	this->surname = surname;
}

HumanEntity::~HumanEntity()
{
}

ostream& operator<<   (ostream& os, const HumanEntity& t)
{
	os << t.name << " " << t.surname <<"; ";
	os << (AnimalEntity&)t;
	return os;
}
