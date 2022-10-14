#pragma once
#include "Potion.h"
class PotionDamage : public Potion
{
#pragma region constructor
public:
	PotionDamage() = default;
	PotionDamage(const float _value);
#pragma endregion constructor
#pragma region methods
public:
	void OnUse(Entity* _entity) override;
#pragma endregion methods
};