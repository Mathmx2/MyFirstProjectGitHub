#pragma once
#include <initializer_list>
#include <iostream>
template <typename T>
class Array
{
private:
	int count;
	T* tab = nullptr;
#pragma region constructor
public:
	Array() = default;
	Array(int _count);
	Array(std::initializer_list<T> _tab);
	~Array();
#pragma region constructor
#pragma region methods
	T At(int _index);
	T Front();
	T Back();
	void Resize(int _count);
	int Count();
#pragma endregion methods
#pragma region operator
	T& operator[](int _index);
#pragma endregion
};

template<typename T>
Array<T>::Array(int _count)
{
	count = _count;
	tab = new T[count];
}
template<typename T>
inline Array<T>::Array(std::initializer_list<T> _tab)
{
	count = tab.size();
	tab = new T[count];
	int _index = 0;
	for (T _index : _tab)
	{
		tab[_index] = 0;
		_index++;
	}
}

template<typename T>
inline Array<T>::~Array()
{
	delete[] tab;
	count = 0;
}

template<typename T>
T Array<T>::At(int _index)
{
	return tab[_index];
}

template<typename T>
T Array<T>::Front()
{
	return tab[count - 1];
}

template<typename T>
T Array<T>::Back()
{
	return tab[0];

}

template<typename T>
void Array<T>::Resize(int _count)
{
	T* _tmp = tab;
	tab = new T[_count];
	for (int i = 0; i < count && _count; i++)
	{
		tab[i] = _tmp[i];
	}
	delete[] _tmp;
	count = _count;
}

template<typename T>
inline int Array<T>::Count()
{
	return count;
}
template<typename T>
T& Array<T>::operator[](int _index)
{
	return tab[_index];
}
