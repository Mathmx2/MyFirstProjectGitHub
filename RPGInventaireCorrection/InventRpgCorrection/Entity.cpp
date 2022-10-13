#include "Entity.h"
#include "Utils.h"
#pragma region MyRegion

Entity::Entity(const std::string& _name, const float _maxLife, const float _maxMana)
{
	name = _name;
	life = maxLife = _maxLife;
	mana = maxMana = _maxMana;
}

Entity::Entity(const Entity& _copy)
{
	name = _copy.name;
	life = _copy.life;
	maxLife = _copy.maxLife;
	mana = _copy.mana;
	maxMana = _copy.maxMana;
}
#pragma endregion

#pragma region methods

std::string Entity::Name() const
{
	return name;
}

std::string Entity::ToString() const
{
	return name + ": Life => " + std::to_string(life)+ ",Mana => " + std::to_string(mana);
}

float Entity::Life() const
{
	return life;
}

float Entity::MaxLife() const
{
	return maxLife;
}

float Entity::Mana() const
{
	return mana;
}

float Entity::MaxMana() const
{
	return maxMana;
}

bool Entity::IsDead() const
{
	return life == 0.0f;
}

bool Entity::HasMana(const float _cost) const
{
	return mana >= _cost;
}

void Entity::SetLife(const float _life)
{
	life = Utils::Clamp(_life, 0.0f, maxLife);
}

void Entity::SetMaxLife(const float _maxLife)
{
	maxLife = _maxLife;
}

void Entity::AddLife(const float _value)
{
	life = Utils::Clamp(life + _value, 0.0f, maxLife);
}

void Entity::TakeDamage(const float _dmg)
{
	life = Utils::Clamp(life - _dmg, 0.0f, maxLife);
}

void Entity::Addmana(const float _value)
{
	mana = Utils::Clamp(mana + _value, 0.0f, maxMana);
}

void Entity::SetMana(const float _mana)
{
	mana = Utils::Clamp(_mana, 0.0f, maxLife);
}

void Entity::SetMaxMana(const float _maxMana)
{
	maxMana = _maxMana;
}

void Entity::DecreaseMana(const float _value)
{
}

bool Entity::Equals(const Entity* _other) const
{
	return name == _other->name;
}

#pragma endregion