#include "Model.h"
#include <fstream>


Model::Model()
{
	int count = 0;
	std::ifstream words;
	words.open("words.txt");
	if (words.is_open()) {
		std::string currentWord;
		while (words) {
			words >> currentWord;
			wordList.push_back(currentWord);
		}
		srand(time(NULL)); //For Generating Randomness
		word = &wordList.at(rand() % 854);
	}
	
}


Model::~Model()
{
	delete[] word, wordList;
}
