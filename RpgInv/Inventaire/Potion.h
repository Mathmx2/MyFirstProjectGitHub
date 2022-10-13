#pragma once
#include <iostream>
#include <initializer_list>
#include "Item.h"

using namespace std;
template <typename T>
class Potion : public class Item<T>
{
protected:
	T* tabP = nullptr;
	int countP = 0;

public:
	Potion();
	Potion(std::initializer_list<T> _tab);
	~Potion();

public:
	void AddPotion(const T& _item);
	void DisplayPotion();
	int CountP();
	void ClearPotion();


};

template<typename T>
Potion<T>::Potion()
{
	tabP = new T[0];
	countP = 0;
}

template<typename T>
Potion<T>::Potion(std::initializer_list<T> _tab)
{
	countP = 0;
	tabP = new T[0];
	for (const T _item : tabP)
		AddPotion(_item);
}

template<typename T>
inline Potion<T>::~Potion()
{
	ClearPotion();
}

template<typename T>
inline void Potion<T>::AddPotion(const T& _item)
{
	tabP = new T[countP + 1];
	T* _tmp = tabP;
	for (int i = 0; i < countP; i++)
		tabP[i] = _tmp[i];
	countP++;
}

template<typename T>
void Potion<T>::ClearPotion()
{
	if (countP > 0)
		delete[] tabP;
	else
		delete tabP;
	tabP = nullptr;
	countP = 0;
}

template<typename T>
void Potion<T>::DisplayPotion()
{
	T* _tmp = tabP;
	for (int i = 0; i < countP; i++)
	{
		cout << tabP[i] << endl;
	}
}

template<typename T>
int Potion<T>::CountP()
{
	return countP;
}
