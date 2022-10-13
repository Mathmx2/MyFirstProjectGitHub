// InventRpgCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "player.h"
#include "Inventory.h"
#include "Weapon.h"
#include "Entity.h"
#include "Item.h"
#include "potionHealth.h"






int main()
{
	std::cout << "choose your username :";
	std::string _name = "";
	std::cin >> _name;
	Player player = Player(_name);
	player.GetInventory()->AddItem(new PotionHealth(50.0f));
	player.GetInventory()->AddItem(new PotionHealth(50.0f));
	player.GetInventory()->AddItem(new PotionHealth(25.0f));
	player.GetInventory()->AddItem(new Weapon("Bada_boom",90.0f));

	int _choice = 0;

	while (!player.IsDead())
	{
		system("cls");
		player.GetInventory()->DisplayInventory();
		std::cout << "Choose your item: ";
		std::cin >> _choice;
		player.GetInventory()->UseItem(_choice);
		system("pause");
	}

}

