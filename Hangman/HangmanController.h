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
	private:
		View view;
	};
}

