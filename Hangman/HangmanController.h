#pragma once
#include <iostream>
#include <vector>
#include "View.h"
namespace hm
{
	class HangmanController
	{
	public:
		HangmanController();
		~HangmanController();
		void SetupGame();
		View view = View();
	private:
		void StartGame();
		bool win; //Default false
		std::vector<char>* guesses;
		void PrintBoard(std::vector<char>& guesses);

	};
}

