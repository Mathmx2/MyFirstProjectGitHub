#pragma once
#include "Potion.h"

template <typename T>
class Item 
{
private:
	int countI = 0;
	T* tabI = nullptr;
public:
	Item();
	Item(std::initializer_list<T> _tab);
	~Item();


public:

	int countP = Potion<T>::CountP();
	void AddItem(const T& _item);
	void DisplayItem();
	int CoutItem();
	void ClearItem();

};

template<typename T>
inline Item<T>::Item()
{
	countI = 0;
	tabI = new T[0];
}

template<typename T>
inline Item<T>::Item(std::initializer_list<T> _tab)
{
	countI = 0;
	tabI = new T[0];
	for (const T _item : tabI)
		AddItem(_item);
}

template<typename T>
inline Item<T>::~Item()
{
	ClearItem();
}

template<typename T>
void Item<T>::AddItem(const T& _item)
{
	tabI = new T[countI + 1];
	T* _tmp = tabI;
	for (int i = 0; i < countI; i++)
		tabI[i] = _tmp[i];
	countI++;
}

template<typename T>
inline void Item<T>::DisplayItem()
{
	T* _tmp = tabI;
	for (int i = 0; i < countI; i++)
	{
		cout << tabI[i] << endl;
	}
}

template<typename T>
inline void Item<T>::ClearItem()
{
	if (countI > 0)
		delete[] tabI;
	else
		delete tabI;

}

