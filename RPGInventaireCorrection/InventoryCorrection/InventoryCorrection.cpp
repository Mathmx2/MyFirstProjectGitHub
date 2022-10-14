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
int main()
{
	Map map = Map("Map");
	if (!map.IsValid()) return -4;
	while (!map.GetPlayer()->Position()->Equals(map.Exit()->Position()))
	{
		system("cls");
		map.Display();
		map.GetPlayer()->Move();
	}
	system("cls");
	Utils::Log(map.GetPlayer()->Name() + " find the exit !");
	return 0;
} 