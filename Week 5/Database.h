#pragma once
#include "Animal.h"
class Database
{
public:
	bool save(Animal& animal);
	bool displayAll(std::ostream& ostream);
	bool Empty();
private:
	Animal* Create(Animal::eType type);
};


