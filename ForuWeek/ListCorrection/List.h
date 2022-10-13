#pragma once
#include <stdexcept>
#include <initializer_list>



template<typename T>
class List
{
#pragma region f/p
private:
	int count = 0;
	T* tab = nullptr;
#pragma endregion
#pragma region constructor
public:
	List();
	List(std::initializer_list<T> _tab);
	List(const List& _copy);
	~List();
#pragma endregion constructor
#pragma region methods
private:
	int FindOf(const T& _item);
public:
	void Add(const T& _item);
	void Clear(const bool destroyNull);
	int Count();
	void Remove(const T& _item);
	void RemoveAt(const int& _index);
	void RemoveAll(const T& _item);
	bool Countains(const T& _item);
#pragma endregion methods
#pragma region opertor
	T operator[](int _index);
#pragma endregion


};


#pragma region constructor
	template<typename T>
	List<T>::List()
	{
		tab = new T[0];
		count = 0;
	}
	template<typename T>
	List<T>::List(std::initializer_list<T> _tab)
	{
		count = 0;
		tab = new T[0];
		for (const T _item : tab)
			Add(_item);
	}
	template<typename T>
	List<T>::List(const List& _copy)
	{
		for (int i = 0; i < _copy.count; i++)
			Add(_copy.tab[i]);
	}
	template<typename T>
	List<T>::~List()
	{
		Clear(true);
	}
#pragma endregion constructor
#pragma region methods
	template<typename T>
	inline int List<T>::FindOf(const T& _item)
	{
		for (int i = 0; i < count; i++)
			if (tab[i] == _item)
				return i;
		return -1;
	}
	template<typename T>
	void List<T>::Add(const T& _item)
	{
		T* _tmp = tab;
		tab = new T[count + 1];
		for (int i = 0; i < count; i++)
			tab[i] = _tmp[i];
		tab[count] = _item;
		count++;
	}

	template<typename T>
	int List<T>::Count()
	{
		return count;
	}
	template<typename T>
	void List<T>::Remove(const T& _item)
	{
		const int _index = FindOf(_item);
		if (_index == -1) throw std::out_of_range("[List] => can't find item !");
		RemoveAt(_item);
	}
	template<typename T>
	void List<T>::Clear(const bool destroyNull)
	{
		if (count > 0)
		{
			delete[]tab;
		}
		else
			delete tab;
		count = 0;
		tab = destroyNull ? nullptr : new T[0];
	}
	template<typename T>
	void List<T>::RemoveAt(const int& _index)
	{
		T* _tmp = tab;
		tab = new T[count - 1];
		for (int i = 0; i < _index; i++)
			tab[i] = _tmp[i];
		for (int i = _index + 1; i < count; i++)
			tab[i - 1] = _tmp[i];
		count--;
	}
	template<typename T>
	void List<T>::RemoveAll(const T& _item)
	{
		while (Countains(_item))
		{
			RemoveAt(FindOf(_item));
		}
	}
	template<typename T>
	inline bool List <T>::Countains(const T& _item)
	{
		return FindOf(_item) != -1;
	}
	template<typename T>
	T List<T>::operator[](int _index)
	{
		return tab[_index];
	}
#pragma endregion methods

	

	