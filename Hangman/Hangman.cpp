// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HangmanController.h"
#include "View.h"


using namespace std;

int main()
{
	bool playagain = true;
	while (playagain)
	{
		hm::HangmanController controller = hm::HangmanController();
		controller.SetupGame();
		playagain = View().getUserInt("Play Again? 1:Yes 0:No ", 0, 1);
	}
	
}
