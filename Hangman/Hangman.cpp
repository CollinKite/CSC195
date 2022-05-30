// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HangmanController.h"


using namespace std;

int main()
{
	hm::HangmanController controller  = hm::HangmanController();
	controller.SetupGame();
}
