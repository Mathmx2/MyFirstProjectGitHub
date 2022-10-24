#include "GameMorpion.h"




#pragma region methods
GameMorpion::~GameMorpion()
{
	count = 0;
}
void GameMorpion::DisplayMaps()
{
	for (int i = 0; i < map.size() ; i++)
	{
		std::cout << mapPlayed[i];
		if (mapPlayed[i] == ',')
			std::cout << std::endl;
	}
	std::cout << std::endl;
}

int GameMorpion::GameModeFirstPlayer()
{
	char _input;
	std::cout << "vouler vous jouer en premier ? (y/n)";
	std::cin >> _input;
	if (_input == 'y')
	{
		count = 0;
		return count;
	}
	else if (_input == 'n')
	{
		count = 1;
		return count;
	}
	else
	{
		std::cout << " Veuillez rentrer la bonne entrée svp.";
		return GameModeFirstPlayer();
	}
}

void GameMorpion::SetPos()
{
	char _input;
	std::cout << " placer votre marque\n";
	std::cin >> _input;
	if (count % 2 == 0 )
	{
		for (int i = 0; i < map.size(); i++)
			if (_input == map[i])
			{
				mapPlayed[i] = playerOne;
			}
		count++;
	}
	else
	{
		for (int i = 0; i < map.size(); i++)
			if (_input == map[i])
			{
				mapPlayed[i] = playerTwo;
			}
		count++;
	}
}
void GameMorpion::EndGame()
{
#pragma region player1 
	
#pragma endregion

}
#pragma endregion methods
