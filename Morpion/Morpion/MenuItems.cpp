#include "MenuItems.h"

MenuItems::MenuItems(std::string& _name, std::string& _description, Menu* _answer)
{
	name = _name;
	description = _description;
	answer = _answer;
}

MenuItems::MenuItems(MenuItems& _copy)
{
	name = _copy.name;
	description = _copy.description;
	answer = _copy.answer;
}

MenuItems::~MenuItems()
{
	answer = nullptr;
}

std::string MenuItems::Name()
{
	return name;
}

std::string MenuItems::Description()
{
	return description;
}

Menu* MenuItems::Answer()
{
	return answer;
}
