#include "Menu.h"

Menu::Menu(const std::string& _title)
{
    title = _title;
    for (MenuItem* _item : _items)
        items.push_back();
}

Menu::Menu(const Menu& _copy)
{
}

Menu::~Menu()
{
}

void Menu::Open()
{
    isOpen = true;
}

void Menu::Close()
{
    isOpen = false;
}

void Menu::OpenOldMenu()
{
    if (oldMenu != nullptr && oldMenu != this
}

void Menu::DisplayItem()
{
    Utils::ClearConsole();
    Utils::LogTitle(title);
    const size_t _size = times.size();
    for (size_t 
}

std::vector<MenuIem*> Menu::Items() const
{
    return items;
}

void Menu::Choose(const int _index)
{
    try
    {
        if (_index < 0 || _index > items.size())
            throw std::exception("[MENU] => index out of range !");
        items[_index]->OnClick(this);
    }
    catch (const std::exception& _exception)
    {
        Utils::LogError(_exception.what());
        Utils::Pause();
        OpenOldMenu();
    }
}

Menu* Menu::OldMenu() const
{
    return oldMenu;
}

void Menu::SetOldMenu(Menu* _old)
{
    oldMenu = _old;
}

bool Menu::Equals(const Menu* _other)
{
    return title == _other->title;
}
