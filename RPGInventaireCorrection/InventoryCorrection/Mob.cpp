#include "Mob.h"
#include "Map.h"
#include "Utils.h"
#include "Case.h"
#include "Vector2.h"
Mob::Mob(const std::string& _name, Vector2* _position, const float _maxLife, const float _maxMana)
	: Entity(_name, _position, _maxLife, _maxMana)
{

}

Mob::Mob(const Mob& _copy) : Entity(_copy)
{

}

Mob::~Mob()
{
}

void Mob::Move()
{
    Vector2 _position = *Position();
    int _rand = 0;
    switch (rand() %4)
    {
    case 0:
        _rand = 0;
            _position -= Vector2(0, steps);
        break;
    case 1:
        _rand = 1;
            _position -= Vector2(steps, 0);

        break;
    case 2:
        _rand = 2;
            _position += Vector2(0, steps);

        break;
    case 3:
        _rand = 3;
        _position += Vector2(steps, 0);

        break;
    default: break;
    }
    Case* _case = GetMap()->GetCaseAtPosition(_position);
    if (_case == nullptr || _case->IsWall()) return;
    while (_case == nullptr || _case->IsWall())
    {
        switch (_rand)
        {

        case 0:
            _position -= Vector2(0, -1);
            break;
        case 1:
            _position -= Vector2(-1, 0);

            break;
        case 2:
            _position += Vector2(0, -1);

            break;
        case 3:
            _position += Vector2(-1, 0);

            break;
        default: break;
        }
    }
    Position()->Set(_position);   
}

//void Mob::MoveMob() //Tu pouvais utiliser le virtual moove de entity
//{
//    char _input = Utils::UserChoise<char>("(z,q,s,d) for movement:");
//    Vector2 _position = *Position();
//    switch (std::tolower(_input))
//    {
//    case 'z':
//        //_position.Set(Vector2(_position.X(), _position.Y() - 1));
//        _position -= Vector2(0, 1);
//        break;
//    case 'q':
//        //_position.Set(Vector2(_position.X() - 1, _position.Y()));
//        _position -= Vector2(1, 0);
//
//        break;
//    case 's':
//        //_position.Set(Vector2(_position.X(), _position.Y() + 1));
//        _position += Vector2(0, 1);
//
//        break;
//    case 'd':
//        //_position.Set(Vector2(_position.X() + 1, _position.Y()));
//        _position += Vector2(1, 0);
//
//        break;
//    default: break;
//    }
//    Case* _case = GetMap()->GetCaseAtPosition(_position);
//    if (_case == nullptr || _case->IsWall()) return;
//    Position()->Set(_position);
//}

//void Mob::Combat()
//{
//	if (mob->Position()->Equals(player->Position())
//}
