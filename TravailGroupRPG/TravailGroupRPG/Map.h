#pragma once
#include <vector>
#include <string>
#include "Case.h"
#include "Menu.h"
class Case;
class Player;
class Vector2;
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
	std::string mapPath = "";
	Case* enter = nullptr;
	Case* exit = nullptr;
	Player* player = nullptr;
#pragma endregion
#pragma region constructor/destructor
public:
	Map() = default;
	Map(const std::string& _mapPath);
	Map(const Map& _copy);
	~Map();
#pragma endregion
#pragma region methods
private:
	void Init();
public:
	void Display();
	bool IsValid() const;
	Case* GetCaseAtPosition(const Vector2& _position);
	void SetPlayer(Player* _player);
	Player* GetPlayer() const;
	Case* Enter()const;
	Case* Exit() const;
	std::string MapName() const;
#pragma endregion


};

