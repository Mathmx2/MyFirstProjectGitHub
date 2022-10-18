#pragma once
#include <string>

class Vector2;
class Map;

class Entity
{
#pragma region f/p
private:
	std::string name = "";
	float life = 0.0f;
	float maxLife = 100.0f;
	float mana = 0.0f;
	float maxMana = 100.0f;
	Map* currentMap = nullptr;
	Vector2* position = nullptr;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	Entity() = default;
	Entity(const std::string& _name,Vector2* _position, const float _maxLife = 100.0f, const float _maxMana = 100.0f);
	Entity(const Entity& _copy);
	virtual ~Entity();
#pragma endregion constructor/destructor
#pragma region methods
public:
	Vector2* Position();
	std::string Name() const;
	std::string ToString() const;
	float Life() const;
	float MaxLife() const;
	float Mana() const;
	float MaxMana() const;
	bool IsDead() const;
	bool HasMana(const float _cost) const;
	bool Equals(const Entity* _other) const;
	void SetLife(const float _life);
	void SetMaxLife(const float _maxLife);
	void AddLife(const float _value);
	void TakeDamage(const float _dmg);
	void AddMana(const float _value);
	void SetMana(const float _mana);
	void SetMaxMana(const float _maxMana);
	void DecreaseMana(const float _value);
	Map* GetMap() const;
	void SetMap(Map* _map);
	virtual void Move() = 0;
#pragma endregion methods
};

