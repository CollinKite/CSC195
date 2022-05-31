#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class View
{
public:
	View();
	~View();
	void PrintMenu();
	void Print(string statement);
	int getUserInt(string prompt, unsigned short low, unsigned short high);
	//NEED TO FIX ASAP
	char getUserChar(string prompt);
	void printAttemptsLeft(int attempts);
	void hangman(int attempts);
	void printGuesses(std::vector<char>* guesses);
	void PrintWrongLetter();
	void PrintCorrectLetter();
	void PrintWord(string* word, vector<char>* correctGuesses);
};

