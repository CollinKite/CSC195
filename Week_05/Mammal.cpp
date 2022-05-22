#include "Mammal.h"


void Mammal::read(std::ostream& ostream, std::istream& istream) {
	Animal::read(ostream, istream);

	ostream << "Enter number of legs: ";
	istream >> mNumLegs;

}

void Mammal::write(std::ostream& ostream) {
	
	Animal::write(ostream);

	ostream << "number of legs: " << mNumLegs << std::endl;

}

void Mammal::read(std::ifstream& istream) {
	Animal::read(istream);

	istream >> mNumLegs;

}

void Mammal::write(std::ofstream& ostream) {
	Animal::write(ostream);

	ostream << mNumLegs << std::endl;

}