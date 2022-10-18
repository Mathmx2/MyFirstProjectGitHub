#pragma once
#include "MapDataBase.h"
#include "Vector2.h"

class Case
{
	/*
	* Position => Getter
	* Etat => Getter
	* Case() = default
	* Case(etat, position);
	* Case(copy)
	* ~Case()
	*/
#pragma region f/p
private:
	char caseValue = MapDataBase::Wall;
	Vector2* position = nullptr;
#pragma endregion f/p
#pragma region constructor
public:
	Case() = default;
	Case(const char _value, Vector2* _position);
	Case(const Case& _copy);
	virtual ~Case();
#pragma endregion constructor
#pragma region methods
public:
	bool IsWall() const;
	bool HasMob() const;
	bool IsEnter() const;
	bool IsExit() const;
	char CaseValue() const;
	Vector2* Position() const;
#pragma endregion




};

