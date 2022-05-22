#include "Database.h"
#include "Mammal.h"
#include "Bird.h"

const std::string filename = "testFile.txt";

Animal* Database::Create(Animal::eType type) {
	switch (type)
	{
		case Animal::eType::Mammal:
			return new Mammal;
			break;
		case Animal::eType::Bird:
			return new Bird;
			break;
		default:
			break;
	}
	return nullptr;
}

bool Database::save(Animal& animal) {
	std::ofstream file(filename, std::ofstream::out | std::ofstream::app);

	if (file.is_open()) {
		file << animal;
		file.close();
		return true;
	}

	return false;
}

bool Database::Empty() {
	std::ofstream file(filename, std::ofstream::trunc);
	if (file.is_open()) {
		file.close();
		return true;
	}
	return false;
}

bool Database::DisplayAll(std::ostream& stream) {
	std::ifstream file(filename);
	int type = 0;
	Animal* animal;

	if (file.is_open()) {
		while (!file.eof()) {
			file >> type;
			animal = Create((Animal::eType)type);

			if (file.fail()) {
				file.close();
				return true;
			}

			file >> *animal;
			stream << *animal;
		}
	}
}

