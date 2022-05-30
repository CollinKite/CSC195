#include "View.h"
#include "color.hpp"
View::View()
{
}

View::~View()
{
}

void View::PrintMenu()
{
	std::cout << dye::aqua("1. Start Game") << std::endl;
	std::cout << dye::yellow("2. Check Selected Word ") << std::endl;
	std::cout << dye::red("3. Quit") << std::endl;
}

void View::Print(std::string statement)
{
	std::cout << statement << std::endl;
}

int View::getUserInt(string prompt, unsigned short low, unsigned short high) {
	int iTemp = 0;

	do {
		cout << prompt;
		cin >> iTemp;

		if (!cin.good()) {
			cin.clear();
			cin.ignore();
			cout << "\n *** Improper input *** \n";
			iTemp = low - 1;
		}

	} while ((iTemp < low) || (iTemp > high));

	return iTemp;
}
