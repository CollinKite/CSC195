#include "MyInput.h"


int MyInput::getUserInt(string prompt, unsigned short low, unsigned short high) {
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

string MyInput::getUserString(string prompt) {
	cout << prompt;
	string temp;
	cin >> temp;

	return temp;
}