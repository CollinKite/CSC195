#include "View.h"
#include "color.hpp"

View::View()
{
}

View::~View()
{
}

void View::PrintMenu()
{
	std::cout << dye::aqua("1. Start Game") << std::endl;
	std::cout << dye::yellow("2. Check Selected Word ") << std::endl;
	std::cout << dye::red("3. Quit") << std::endl;
}

void View::Print(std::string statement)
{
	std::cout << statement << std::endl;
}

int View::getUserInt(string prompt, unsigned short low, unsigned short high) {
	int iTemp = 0;

	do {
		cout << prompt;
		cin >> iTemp;

		if (!cin.good()) {
			cin.clear();
			cin.ignore();
			cout << "\n *** Improper input *** \n";
			iTemp = low - 1;
		}

	} while ((iTemp < low) || (iTemp > high));

	return iTemp;
}

char View::getUserChar(string prompt) {
	cout << prompt;
	char temp = NULL;
	cin >> temp;
    temp = putchar(tolower(temp)); //Make Lowercase



	return temp;
}

void View::printAttemptsLeft(int attempts)
{
	std::cout << dye::red("Guesses Left: ");
	for (int i = 0; i < attempts; i++)
	{
		std::cout << dye::red("*");
	}
    std::cout << std::endl;
}

//Got Ascii from https://github.com/codingcleverly/hangman_game/blob/main/hangman_functions.cpp
void View::hangman(int attempts)
{
    if (attempts == 6)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (attempts == 5)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (attempts == 4)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (attempts == 3)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (attempts == 2)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (attempts == 1)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (attempts == 0)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
}

    void View::printGuesses(std::vector<char>* guesses)
    {
        std::cout << dye::aqua("Letters Guessed [ ");
        for (int i = 0; i < guesses->size(); i++)
        {
            std::cout << dye::aqua(guesses->at(i)) << " ";

        }
        std::cout << dye::aqua(" ]") << std::endl;
    }

    void View::PrintWrongLetter()
    {
        std::cout << dye::red("Wrong Guess!") << std::endl;
    }

    void View::PrintCorrectLetter()
    {
        std::cout << dye::green("Correct!") << std::endl;
    }

    bool View::PrintWord(string* word, vector<char>* correctGuesses)
    {
        bool win = true;
        for (int i = 0; i < word->length(); i++)
        {
            if (std::find(correctGuesses->begin(), correctGuesses->end(), word->at(i)) != correctGuesses->end()) {
                std::cout << dye::green(word->at(i));
            }
            else
            {
                std::cout << dye::green("_");
                win = false;
            }
        }
        std::cout << std::endl;
        return win;
    }