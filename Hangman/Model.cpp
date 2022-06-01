#include "Model.h"
#include <fstream>
#include <algorithm>

Model::Model()
{
	word = nullptr;
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
		std::for_each(word->begin(), word->end(), [](char& c) { //Convert word to lowercase
			c = ::tolower(c);
			});
	}
	
}


Model::~Model()
{
}