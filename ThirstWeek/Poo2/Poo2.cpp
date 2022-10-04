// Poo2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Entity
{
private:
    float life = 0.0f;
public:
    Entity() = default;
    Entity(float _life)
    {
        life = _life;
    }
    ~Entity()
    {

    }
    void SetLife(float _life) {
        life = _life;
    }
    virtual void Draw()
    {
        std::cout << "Draw Entity" << std::endl;
    }

};

class Player : public Entity
{
private:
    std::string nickName = "";
    Entity* ent;

public:
    Player() = default;
    Player(std::string _name) {
        nickName = _name;
    }
    ~Player()
    {
        delete ent;
    }
    std::string NickName() const
    {
        return nickName;
    }

    void Draw() override
    {
        std::cout << "Draw Player";
    }
    Player operator=(const Player& player)
    {
        nickName = player.nickName;
    }

    bool operator== (const Player& player)
    {
        return nickName == player.nickName;
    }

    //bool operator!=(const Player& player)

    /*
    friend std::iostream& operator<<(std::ostream& os, const Player& p)
    {
        os << nickName;
        return os;
    }*/
    operator std::string()
    {
        return nickName;
    }
};







int main()
{

    Player p = Player("toto");
    Player p1 = Player("benoit");
    p = p1;
    std::cout << p;

}
