#pragma once
#include <iostream>
#include <string>

using namespace std;
class View
{
public:
	View();
	~View();
	void PrintMenu();
	void Print(string statement);
	int getUserInt(string prompt, unsigned short low, unsigned short high);
private:

};

