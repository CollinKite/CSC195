#pragma once
#include <string>
#include <memory>
#include <iostream>

using namespace std;

class MyInput
{
public:
	int getUserInt(string prompt, unsigned short low, unsigned short high);
	string getUserString(string prompt);
	
};

