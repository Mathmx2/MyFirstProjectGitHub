#pragma once
#include <string>
#include "Utils.h"
#include <iostream>
class GameMorpion
{
#pragma region f/p
private://                       3   7   11      19  23  27      35  39  43
	std::string map =       {"-- 1 - 2 - 3 --,-- 4 - 5 - 6 --,-- 7 - 8 - 9 --"};
	std::string mapPlayed = { "-- 1 - 2 - 3 --,-- 4 - 5 - 6 --,-- 7 - 8 - 9 --" };
	int count = 0;
	char playerOne = 'X';
	char playerTwo = 'O';

#pragma endregion
#pragma region constructor
public:
	GameMorpion()= default;
	virtual ~GameMorpion();
#pragma endregion
#pragma region methods
public:
	void DisplayMaps();
	int GameModeFirstPlayer();
	void SetPos();
	void EndGame();
#pragma endregion


};

