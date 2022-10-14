#include "Entity.h"
#include "PotionDamage.h"
#include <iostream>

PotionDamage::PotionDamage(const float _value) : Potion("Potion Damage", _value) { }

void PotionDamage::OnUse(Entity* _entity)
{
	Potion::OnUse(_entity);
	_entity->TakeDamage(Value());
	std::cout << "new life for " + _entity->Name() + ": " + std::to_string(_entity->Life()) << std::endl;
}
