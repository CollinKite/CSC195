#include "Animal.h"



void Animal::read(std::ifstream& istream) {
	
	istream >> mName;
	istream >> mLifespan;
}
void Animal::write(std::ostream& ostream) {
	ostream << "Name: " << mName << std::endl;
	ostream << "Lifespan: " << mLifespan << std::endl;
}

void Animal::read(std::ostream& ostream, std::istream& istream) {
	ostream << "enter name: ";
	istream >> mName;

	ostream << "enter lifespan: ";
	istream >> mLifespan;

}

void Animal::write(std::ofstream& ostream) {
	ostream << (int)getType() << std::endl;
	ostream << mName << std::endl;
	ostream << mLifespan << std::endl;
}

std::istream& operator >> (std::istream& istream, Animal& animal) {
	animal.read(std::cout, istream);

	return istream;
}

std::ostream& operator << (std::ostream& ostream, Animal& animal) {
	animal.write(ostream);

	return ostream;
}

std::ifstream& operator >> (std::ifstream& istream, Animal& animal) {
	animal.read(std::cout, istream);

	return istream;
}

std::ofstream& operator << (std::ofstream& ostream, Animal& animal) {
	animal.write(ostream);

	return ostream;
}