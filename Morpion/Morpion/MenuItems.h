#pragma once
#include <string>
#include "Menu.h"


class MenuItems
{
#pragma region f/p
private:
	std::string name;
	std::string description;
	Menu* answer = nullptr;
#pragma endregion
#pragma region constructor/destructor
public:
	MenuItems(std::string& _name, std::string& _description, Menu* _answer);
	MenuItems(MenuItems& _copy);
	virtual ~MenuItems();
#pragma endregion
#pragma region methods
public:
	std::string Name();
	std::string Description();
	Menu* Answer();
#pragma endregion



};

