#include <iostream>
#include "Environment.h"
#include "Map.h"
#include "Utils.h"
#include "Case.h"
#include "Player.h"
#include "File.h"
#include "Inventory.h"
#include "Potion.h"
#include "Item.h"
#include "Weapon.h"
#include "Path.h"
#include "Vector2.h"
#include "Menu.h"
#include "Map.h"


int main()
{
	Player* _player = new Player(Utils::UserChoise<std::string>("enter your username"),new Vector2(0,0));
	MapLoader _loader = MapLoader();
	_loader.Load();
	if (_loader.IsEmpty()) return -5;
		_loader.DisplayMapName();

	Map* map = _loader.GetMap(Utils::UserChoise<int>("Choose map: "));
	if (!map->IsValid()) return -4;
	map->SetPlayer(_player);
	while (!map->GetPlayer()->Position()->Equals(map->Exit()->Position()))
	{
		system("cls");
		map->Display();
		map->GetPlayer()->Move();
	}

	system("cls");
	Utils::Log(map->GetPlayer()->Name() + " find the exit !");
	return 0;
	

} 