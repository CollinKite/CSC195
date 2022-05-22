#include "Bird.h"


void Bird::read(std::ostream& ostream, std::istream& istream) {
	Animal::read(ostream, istream);

	ostream << "Enter wingspan: ";
	istream >> mWingspan;

	ostream << "Enter number of eggs: ";
	istream >> mNumEggs;

}

void Bird::write(std::ostream& ostream) {
	Animal::write(ostream);

	ostream << "Wingspan: " << mWingspan << std::endl;
	ostream << "Eggs: " << mNumEggs << std::endl;

}

void Bird::read(std::ifstream& istream) {
	Animal::read(istream);

	istream >> mWingspan;
	istream >> mNumEggs;

}

void Bird::write(std::ofstream& ostream) {
	Animal::write(ostream);

	ostream << mWingspan << std::endl;
	ostream << mNumEggs << std::endl;

}