#pragma once
#include <vector>
#include <string>
#include "Case.h"

class Case;
class Player;

class Map
{
	/*
	* vector<Case*>
	* Player* player;
	* 
	* Map() = default;
	* Map(const std::string& _mapName);
	* Map(const Map& _copy);
	* ~Map();
	* 
	* Case* exit;
	* Case* enter;
	* Display();
	* void Init();
	*/

#pragma region f/p
private:
	std::vector<Case*> cases = std::vector<Case*>();
	std::string mapName = "default Name";
	Case* enter = nullptr;
	Case* exit = nullptr;
	Player* player = nullptr;
#pragma endregion
#pragma region constructor/destructor
public:
	Map() = default;
	Map(const std::string& _mapName);
	Map(const Map& _copy);
	~Map();
#pragma endregion
#pragma region methods
private:
	void Init();
public:
	void Display();
	bool IsValid() const;
#pragma endregion


};

