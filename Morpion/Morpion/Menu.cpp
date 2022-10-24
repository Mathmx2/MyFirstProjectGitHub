#include "Menu.h"
#include "Utils.h"
Menu::Menu(std::string& _title)
{
	title = _title;
	for (MenuItems* _items : items)
		items.push_back;
}

Menu::Menu(Menu& _copy)
{
	title = _copy.title;
}

void Menu::ChoiceItems(int _index)
{
	_index = Utils::UserChoice<int>("Choice your item");
	items[_index];
}

void Menu::Open()
{
	isOpen = true;
}

void Menu::Close()
{
	isOpen = false;
}

std::vector<MenuItems*> Menu::Items() const
{
	return items;
}


