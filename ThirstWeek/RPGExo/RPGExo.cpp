// RPGExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

template<typename T>

class List
{
private:
	T* tab = new T[0];
	int count = 0;
public:
	List(std::initializer_list<T> _tab)
	{
		tab = new T[_tab.size()];
		count = _tab.size();
		int index = 0;
		for (T _item : _tab)
		{
			tab[index++] = _item;
		}
	}
	void Display()
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << tab[i] << " ";
		}
	}
};
//
//class Player
//{
//public:
//	void Hello()
//	{
//		std::cout << "Hello !" << std::endl;
//	}
//	template<typename T>
//	void Test(T _item)
//	{
//		std::cout << _item << std::endl;
//	}
//};

int main()
{
	/*List<bool> _tab = List<bool>{ true, false, true, true, false };
	_tab.Display();

	Player player;
	player.Hello();
	player.Test<float>(0.5f);*/
}

