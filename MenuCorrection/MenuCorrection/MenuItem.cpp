#include "MenuItem.h"

MenuItem::MenuItem(const std::string& _name, const std::string& _description, Menu* _owner)
{
    name = _name;
    description = _description;
    owner = _owner;
}

MenuItem::MenuItem(const MenuItem& _copy)
{
    name = _name;
    description = _description;
    owner = _owner;
}

void MenuItem::OnClick(Menu* _currentMenu)
{
    if (nextMenu == nullptr)
        throw std::exception("[MenuItem] => next menu is Null ! ");
    if (!nextMenu->Equals(_currentMenu))
        nextMenu->SetOldMenu(_currentMenu);
    _currentMenu->Close();
    nextMenu->Open();
}

std::string MenuItem::Name() const
{
    return name;
}

std::string MenuItem::Description() const
{
    return description;
}

Menu* MenuItem::Owner() const
{
    return owner;
}

std::string MenuItem::ToString() const
{
    return name + "\n\t-> " + description;
}
