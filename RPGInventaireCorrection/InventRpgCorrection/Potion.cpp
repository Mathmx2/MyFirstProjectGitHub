#include "Potion.h"
#include <iostream>
#pragma region constructor
Potion::Potion(const std::string& _name, const float _value)
{ 
	value = _value;
}

Potion::Potion(const Potion& _copy) : Item(_copy)
{
	value = _copy.value;
}


#pragma endregion constructor
float Potion::Value() const
{
	return value;
}

std::string Potion::ToString() const
{
	return Item::ToString() + " value: " + std::to_string(value);
}

void Potion::OnUse(Entity* _entity)
{
	Item::OnUse(_entity);
	std::cout << ToString() << std::endl;
}

bool Potion::Equals(const Item* _other) const
{
	const Potion* _potion = dynamic_cast<const Potion*>(_other);
	if (_potion == nullptr) return false;
	const bool _result = Item::Equals(_other) && value == _potion->value;
	return _result;
}
