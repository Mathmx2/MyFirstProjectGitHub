#pragma once
#include <initializer_list>
#include <iostream>
template <typename T>
class Map
{

#pragma region f/p
private:
	T* tab = nullptr;
	int count = 0;
#pragma endregion
#pragma region constructor/deconstructor
public:
	Map() = default;
	Map(std::initializer_list<T> _tab);
	~Map();
#pragma endregion
#pragma region methods
public:
	void At(int _index);
	//operator[] operator;
	void Clear();
	bool Empty();
	void Insert(int _index, T _value);
	void Remove();
	void Display();
#pragma endregion

};
template <typename T>
Map<T>::Map(std::initializer_list<T> _tab)
{
	tab = nullptr;
	tab = new T[0];
}
template<typename T>
inline Map<T>::~Map()
{
	Clear();
}
template<typename T>
inline void Map<T>::At(int _index)
{

}

template<typename T>
inline void Map<T>::Clear()
{
	delete tab;
	tab = nullptr;
}

template<typename T>
inline bool Map<T>::Empty()
{
	if (tab == nullptr)
		return true;
	else
		return false;
}

template<typename T>
inline void Map<T>::Insert(int _index, T _value)
{
	if (Empty())
	{
		tab = new T[count + 1];
		tab[_index] = _value;
		count++;
	}
	else
	{
		tab = new T[count + 1];
		for (int i = count; i < count-_index; i--)
		{
			tab[i + 1] = tab[i];
		}
		tab[_index] = _value;
		count++;
	}
}

template<typename T>
inline void Map<T>::Remove()
{
}

template<typename T>
inline void Map<T>::Display()
{
	T* _tmp = tab;
	for (int i = 0; i < count; i++)
		std::cout << _tmp[i] << std::endl;
}
