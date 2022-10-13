#pragma once
#include <initializer_list>
#include <iostream>
template<typename T>

class List
{
private:
	T* tab = nullptr;
	count = 0;
public:
	List();
	List(std::initializer_list <T>_tab);
	~List();

#pragma region Methods
public:
	void Add(const int _item);

#pragma endregion



};

template<typename T>
List<T>::List()
{
	tab = new T[0];
	count = 0;
}
template<typename T>
List<T>::List(std::initializer_list<T> _tab)
{

}

template<typename T>
void List<T>::Add(const int _item)
{
	int _tmp = new tab[count];
	for (int i = 0; i < count; i++)
	{
		tab[i] =  
	}
	Tab[0] = _tmp;

	count++
}
