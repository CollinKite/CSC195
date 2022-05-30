#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Game
{
public:
	Game(string* word);
	~Game();
	void StartGame();

private:
	string* word;
	vector<char> guesses;
	bool win;
};

