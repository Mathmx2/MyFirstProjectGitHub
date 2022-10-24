#pragma once
#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include "Player.h"
#include "Map.h"
class Inventory;

class Mob : public Entity
{

#pragma region f/p
	int steps = 0; // ajout 
#pragma endregion
#pragma region constructor
public:
	Mob() = default;
	Mob(const std::string& _name, Vector2* _position, const float _maxLife = 100.0f, const float _maxMana = 100.0f);
	Mob(const Mob& _copy);
	~Mob();
#pragma endregion
#pragma region methods
	void MoveMob();
	void Move() override; //ajout 
#pragma endregion
#pragma region operator
#pragma endregion operator
};

