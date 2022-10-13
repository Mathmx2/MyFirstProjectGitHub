// Inventaire.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Inventaire.h"
#include "Potion.h"
#include <string>

template <typename T>
void ItemSetInventaire()
{

	for (int i = 0; i < countP; i++)
	{
		tab[count + i] = tabP[i];
	}

}

int main()
{
	Inventaire<string> _inv;

	_inv.Add("Hache");
	_inv.Add("health");
	_inv.DisplayIventaire();
}

