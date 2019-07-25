#include "pch.h"
#include "HumanEntity.h"


HumanEntity::HumanEntity()
{
	this->name = "Anyname";
	this->surname = "AnySurname";
}

HumanEntity::HumanEntity(string name, string surname) {
	this->name = name;
	this->surname = surname;
}

HumanEntity::~HumanEntity()
{
}

ostream& operator<<   (ostream& os, const HumanEntity& t)
{
	os << t.name << " " << t.surname << "Age: " << t.sex << endl;

	return os;
}
