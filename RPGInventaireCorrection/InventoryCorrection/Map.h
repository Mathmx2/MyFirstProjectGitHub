#pragma once
#include <vector>
#include <string>
#include "Case.h"
#include "Menu.h"
#include <vector>
class Case;
class Player;
class Mob;
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
	Case* caseMob = nullptr;     // Set spawn mob
	Player* player = nullptr;
	Mob* mob = nullptr;          // set Mob
	//std::vector<Mob> ; //ajout 
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
	void SetMob(Mob* _mob);
	Player* GetPlayer() const;
	Case* Enter()const;
	Case* Exit() const;
	std::string MapName() const;
	void AddMob(const std::string& _);// ajout
#pragma endregion


};

