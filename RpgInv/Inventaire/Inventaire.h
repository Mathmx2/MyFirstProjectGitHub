#pragma once
using namespace std;
#include <iostream>
#include <initializer_list>
#include "Potion.h"

template <typename T>
class Inventaire
{
private:
	T* tab = nullptr;
	int count = 0;
	

public: 
	Inventaire();
	int Iventaire(std::initializer_list<T> _tab);
	~Inventaire();

public:
	void Add(const T& _item);
	void ItemSetInventaire();
	void Clear();
	void DisplayIventaire();
};

template<typename T>
Inventaire<T>::Inventaire()
{
	tab = new T[0];
	count = 0;
}

template<typename T>
int Inventaire<T>::Iventaire(std::initializer_list<T> _tab)
{
	count = 0;
	tab = new T[0];
	for (const T _item : tab)
	{
		Add(_item);
	}
	return 0;
}

 template<typename T>
 inline Inventaire<T>::~Inventaire()
 {
	 Clear();
 }


template <typename T>
void Inventaire<T>::Add(const T& _item)
{
	T* _tmp = tab;
	tab = new T[count + 1];
	for (int i = 0; i < count; i++)
	{
		tab[i] = _tmp[i];
	}
	tab[count] = _item;
	count++;
}

template<typename T>
void Inventaire<T>::Clear()
{
	if (count > 0)
		delete[] tab;
	else
		delete tab;
	tab = nullptr;
	count = 0;
}

template <typename T>
void Inventaire<T>::DisplayIventaire()
{
	ItemSetInventaire();
	T* _tmp = tab;
	for (int i = 0; i < count; i++)
	{
		cout << tab[i] << endl;
	}
}


template <typename T>
void Inventaire<T>::ItemSetInventaire()
{
	for (int i = 0; i < countP; i++)
	{
		tab[count + i] = tabP[i];
	}

}