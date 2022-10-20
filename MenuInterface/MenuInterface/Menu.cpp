#include "Menu.h"
#include <string>
#include <iostream>

void Menu::DisplayMenuHotel()
{
	std::cout << "           Hotel            " << std::endl;
	std::cout << "           -----            " << std::endl;
	std::cout << "1 : Réservation" << std::endl;
	std::cout << "         -> Reservation Gestion " << std::endl;
	std::cout << "2 : Return. " << std::endl;
	std::cin >> answer;
	if (answer == 1)
	{
		system("CLS");
		return Reservation();
	}
	else if (answer == 2)
	{
		system("CLS");
		return DisplayMenuHotel();
	}
}
