#pragma once
#include "Animal.h"
class Database
{
public:
	bool save(Animal& animal);
	bool DisplayAll(std::ostream& ostream);
	bool Empty();
private:
	Animal* Create(Animal::eType type);

};

