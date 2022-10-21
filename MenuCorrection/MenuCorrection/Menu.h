#pragma once
#include "Object.h"
#include <vector>
class MenuItem;

class Menu
{
protected:
	std::string title = "";
	Menu* oldMenu = nullptr;
	bool isOpen = false;
	std::vector<std::string>;


public:
	Menu(const std::string& _title);
	Menu(const Menu& _copy);
	~Menu() override;

#pragma region methods
	void Open();
	void Close();
	void OpenOldMenu();
	void DisplayItem();
	std::vector<MenuIem*> Items() const;
	void Choose(const int _index);
	Menu* OldMenu() const;
	void SetOldMenu(Menu* _old);
	bool Equals(const Menu* _other);
#pragma endregion

};

