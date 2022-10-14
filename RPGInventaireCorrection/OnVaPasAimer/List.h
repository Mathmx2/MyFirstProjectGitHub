#pragma once
#include <initializer_list>
#include "Node.h"
template <typename T>
class List
{
private:
	Node<T>* head = nullptr;
	Node<T>* first = nullptr;
	Node<T>* last = nullptr;
	T* tab = nullptr;
	int count = 0;
public:
	List();
	List(std::initializer_list<T> _tab);
	~List();

public: 
	void Add(const T& _item);
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
	for ( const T& _item : _tab)
		Add(_item)
}
template<typename T>
List<T>::~List()
{
	Clear();
}


template<typename T>
void List<T>::Add(const T& _item)
{
	Node<T>* _newNode = new Node<T>(_item);
	if (tab[count] == nullptr)
	{
		head = _newNode;
		first = _newNode;
		last = _newNode;
	}

}

template<typename T>
void List<T>::Clear()
{
	count = 0;
	delete tab;
	tab = nullptr;
}

