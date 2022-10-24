#include "Map.h"
#include "Path.h"
#include "Player.h"
#include "Environment.h"
#include "File.h"
#include "Utils.h"
#include "Vector2.h"
#include "Case.h"
#include <iostream>
#include "Mob.h"
Map::Map(const std::string& _mapPath)
{
	mapPath = _mapPath;
	mapName = Path::GetFileNameWthitoutExtension(mapPath);
	Init();
	//player = new Player(Utils::UserChoise<std::string>("enter your username : "), enter->Position());
	mob = new Mob("Zombie", caseMob->Position());   // creer le mob // il devrait etre = a nullptr ? vu qu'on l'initialise dans Init
}
Map::Map(const Map& _copy)
{
	mapName = _copy.mapName;
	cases = _copy.cases;
}

Map::~Map()
{
	cases.clear();
}

void Map::Init()
{
	std::vector<std::string> _lines = File::GetAllLines(mapPath);
	const size_t _size = _lines.size();
	for (size_t y = 0; y < _size; y++)
	{
		const std::string _line = _lines[y];
		const size_t _lenght = _line.length();
		for (size_t x = 0; x < _lenght;x++)
		{
			Vector2* _position = new Vector2(x, y);
			Case* _case = new Case(_line[x], _position);
			if (_case->IsEnter()) enter = _case;
			else if (_case->IsExit()) exit = _case;
			else if (_case->HasMob()) // ajout
			{
				caseMob = _case;
				mob = new Mob("Zombie", caseMob->Position());
			}
			cases.push_back(_case);
		}
		cases.push_back(new Case('\n', new Vector2(-1, -1))); // TODO to change!!/
	}
}

void Map::Display()
{
	const size_t _size = cases.size();
	for (size_t i = 0; i < _size; i++)
	{

		if (player->Position()->Equals(cases[i]->Position()))
			std::cout << MapDataBase::Player;
		else if (mob->Position()->Equals(cases[i]->Position()))   // Actualise l'affichage par rapport a la position du mob
			std::cout << MapDataBase::Mob;
		else
		std::cout << cases[i]->CaseValue();
	}
}

bool Map::IsValid() const
{
	return enter != nullptr && exit != nullptr;
}

Case* Map::GetCaseAtPosition(const Vector2& _position)
{
	const size_t _size = cases.size();
	for (size_t i = 0; i < _size; i++)
	{
		if (cases[i]->Position()->Equals(&_position))
			return cases[i];
	}
	return nullptr;
}

void Map::SetPlayer(Player* _player)
{
	player = _player;
	player->Position()->Set(*enter->Position());
	player->SetMap(this);
}

void Map::SetMob(Mob* _mob)
{
	mob = _mob;
	mob->Position()->Set(*caseMob->Position());
	mob->SetMap(this);
}

Player* Map::GetPlayer() const
{
	return player;
}

Case* Map::Enter() const
{
	return enter;
}

Case* Map::Exit() const
{
	return exit;
}

std::string Map::MapName() const
{
	return mapName;
}