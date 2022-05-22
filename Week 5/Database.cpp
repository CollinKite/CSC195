#include "Database.h"

const std::string filename = "testFile.txt";

bool Database::save(Animal& animal) {
	std::ofstream file(filename, std::ofstream::out | std::ofstream::app);

	if (file.is_open()) {
		file << animal;
		file.close();
		return true;
	}

	return false;


}