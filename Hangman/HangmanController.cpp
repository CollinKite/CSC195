#include "HangmanController.h"
#include "View.h"
#include "Model.h"


hm::HangmanController::HangmanController()
{
}

hm::HangmanController::~HangmanController()
{
	delete guesses;
}

void hm::HangmanController::SetupGame()
{
	
	Model* model = new Model();
	if (model->word != nullptr)
	{
		int menu = 0;
		while (menu != 3)
		{
			view.PrintMenu();
			menu = view.getUserInt("Enter a Option: ", 1, 3);

			switch (menu)
			{
			case 1:
				StartGame();
				break;
			case 2:
				view.Print(model->word->c_str());
				break;
			case 3:
				delete model;
			}
		}
	}
	else
	{
		view.Print("words.txt is not in Directory");
	}
	
}

void hm::HangmanController::StartGame()
{
	
}

void hm::HangmanController::PrintBoard(std::vector<char>& guesses)
{
}


