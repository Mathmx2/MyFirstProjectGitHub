#pragma once
#include "Entity.h"
class Inventory;

class Player : public Entity
{
#pragma region f/p
private:
	Inventory* inventory = nullptr;
#pragma endregion
public :
	Player() = default;
	Player(const std::string& _name, const float _maxLife, const float _maxMana);
	Player(const Player& _copy);
	~Player();

	Inventory* GetInventory() const;
};

