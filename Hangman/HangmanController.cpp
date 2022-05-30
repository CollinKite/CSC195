#include "HangmanController.h"
#include "View.h"
#include "Model.h"
#include "Game.h"


hm::HangmanController::HangmanController()
{
	view = View();
	
}

hm::HangmanController::~HangmanController()
{
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
			{
				Game* game = new Game(model->word);
				game->StartGame();
				delete game;
				menu = 3;
				break;
			}
			case 2:
				view.Print(model->word->c_str());
				break;
			}
		}
	}
	else
	{
		view.Print("words.txt is not in Directory");
	}
	delete model;
}
