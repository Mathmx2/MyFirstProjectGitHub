// ListePoo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>




template<typename T>

class List
{
private:
	T* tab = new T[0];
	int count = 0;

public:

	List(std::initializer_list <T> _tab)
	{
		tab = new T[_tab.size()];
		count = _tab.size();
		int index = 0;

		for (T _item : _tab)
		{
			tab[index++] = _item;
		}
	}

	T At(T _index)
	{
		return tab[_index];
	}
	
	T Front()
	{
		return tab[0];
	}
	
	T& operator[](T _index)
	{

		return tab[_index];
	}


	void Display()
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << tab[i] << " ";
		}
		std::cout << std::endl;

	}
};


int main()
{

	List<int> _tab = List<int>{ 1, 2, 4, 8, 6 };
	_tab.At(2);
	std::cout << _tab.At(2);
	std::cout << _tab[4];

	
}

