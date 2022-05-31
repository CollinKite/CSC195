#pragma once
#include <iostream>
#include <vector>
#include "View.h"
using namespace std;

class Game
{
public:
	Game(string* word);
	~Game();
	void StartGame();

private:
	string* word;
	vector<char>* guesses;
	vector<char>* correctGuesses;
	bool gameRunning;
	void game();
	int attempts;
	View view;
};

