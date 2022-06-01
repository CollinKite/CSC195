#include "Game.h"

Game::Game(string* wordPtr)
{
	gameRunning = true;
	word = wordPtr;
	attempts = 6;
	guesses = new vector<char>;
	correctGuesses = new vector<char>;
	view = View();
}

Game::~Game()
{
}

void Game::StartGame()
{
	while (gameRunning)
	{
		game();
	}

}

void Game::game()
{
	if (attempts == 0)
	{
		view.hangman(attempts);
		view.Print("You Lost!");
		gameRunning = false;
	}
	else
	{
		view.hangman(attempts);
		view.printGuesses(guesses);
		view.printAttemptsLeft(attempts);
		if (view.PrintWord(word, correctGuesses))
		{
			gameRunning = false;
			view.Print("You Won!");
			return;
		}
		char guess = view.getUserChar("Please Enter a Letter: ");
		//check if guess exists
		bool duplicate = true;
		while (duplicate)
		{
			if (std::find(guesses->begin(), guesses->end(), guess) != guesses->end()) {
				guess = view.getUserChar("Already Guessed that Letter. Please Enter a New Letter: ");
			}
			else if (std::find(correctGuesses->begin(), correctGuesses->end(), guess) != correctGuesses->end()) {
				guess = view.getUserChar("Already Guessed that Letter. Please Enter a New Letter: ");
			}
			else
			{
				duplicate = false;
			}
		}
		//Check if letter matches or not
		if (word->find(guess) < word->length()) 
		{
			//Matches
			view.PrintCorrectLetter();
			correctGuesses->push_back(guess);
		}
		else {
			attempts--;
			std::cout << guess << std::endl;
			view.PrintWrongLetter();
			guesses->push_back(guess);
		}
	}
}

