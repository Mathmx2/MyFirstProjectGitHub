#include "Map.h"
#include <iostream>
Map::Map(std::string& _name)
{
	name = _name;
}

Map::Map(const Map& _copy)
{
	name = _copy.name;
}

Map::~Map()
{
}

void Map::InitialiseMap(std::string _tab)
{
	
}

bool MapExist(std::string _path)
{
}

void Map::SetCursor()
{
    std::cout << "Moove with z,s,d,q\n";
    char _input;
    bool _isValid = false;
    while (!_isValid)
    {
        std::cin >> _input;

        _isValid = _input == 's'
            || _input == 'z'
            || _input == 'q'
            || _input == 'd';

        bool _left = _input == 'q',
            _right = _input == 'd',
            _up = _input == 'z',
            _down = _input == 's';
}

void Map::DisplayMap()
{
	const size_t _size = cases.size();
	for (size_t i = 0; i < _size; i++)
	{
		if (player->Position()->Equals(cases[i]->Position()))
			std::cout << MapDataBase::Player;
		else std::cout << cases[i]->CaseValue();
	}
}
