// OtherKeyWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Entity
{
public:
	virtual ~Entity()
	{

	}
};

class Player : public Entity
{
public:
	Player() = default;
};




int main()
{
	std::vector<Entity*> _entities = std::vector<Entity*>();
	_entities.push_back(new Entity());
	_entities.push_back(new Player());

	for (int i = 0; i < _entities.size(); i++)
	{
		Entity* _entity = _entities[i];
		Player* p = dynamic_cast<Player*>(_entity);
		if (p != nullptr)
		{
			std::cout << "Is Player" << std::endl;
		}
	}




}

