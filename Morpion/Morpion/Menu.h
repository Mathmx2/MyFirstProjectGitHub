#pragma once
#include <string>
#include <vector>
#include "MenuItems.h"


class Menu
{
#pragma region f/p
protected:
	std::string title = "";
	std::vector<MenuItems*> items = std::vector<MenuItems*>();
	bool isOpen = false;
#pragma endregion
#pragma region constructor/destructor
public:
	Menu(std::string& _title);
	Menu(Menu& _copy);
	virtual ~Menu();
#pragma endregion
#pragma region methods
public:
	void ChoiceItems(int _index);
	void Open();
	void Close();
	std::vector<MenuItems*> Items() const;
#pragma endregion

};

