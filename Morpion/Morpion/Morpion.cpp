#include <iostream>
#include "GameMorpion.h"


int main()
{

	GameMorpion _game = GameMorpion();
	_game.GameModeFirstPlayer();
	for (int j = 0; j < 9; j++)
	{
		_game.DisplayMaps();
		_game.SetPos();
		_game.EndGame();
	}
}

