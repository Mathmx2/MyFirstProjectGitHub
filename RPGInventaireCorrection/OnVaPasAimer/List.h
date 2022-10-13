#pragma once
#include <initializer_list>
#include "Node.h"
template <typename T>
class List
{
private:
	T* tab = nullptr;
	int count = 0;
public:
	List();
	List(std::initializer_list<T> _tab);
	~List();

public: 
	void Add();
	void Clear();
};

template <typename T>
List<T>::List()
{
	tab = new T[0];
	count = 0;
}
template <typename T>
List<T>::List(std::initializer_list<T> _tab)
{
	tab = _tab;
	tab = new T[0];
	count = 0;
	//for ()
}
template<typename T>
List<T>::~List()
{
	Clear();
}


template<typename T>
void List<T>::Add()
{
	T _tmp = tab;
	for (int i = 0; i < count; i++)
	{

	}
}

template<typename T>
void List<T>::Clear()
{
	count = 0;
	delete tab;
	tab = nullptr;
}

