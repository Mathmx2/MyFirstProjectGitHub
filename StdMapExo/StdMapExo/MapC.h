#pragma once
#include <initializer_list>
#include <vector>
#include <exception>
#include "KeyValuePair.h"


template <typename TKey, typename TValue>
class Mapc
{
private:
	std::vector<KeyValuePair<TKey, TValue>> tab = std::vector<KeyValuePair<TKey, TValue>>();
	int count = 0;

#pragma region typedef
public:
	typedef KeyValuePair<TKey, TValue>* iterator;
	typedef const KeyValuePair<TKey, TValue>* const_iterator;

	iterator begin()
	{
		return &tab[0];
	}
	const_iterator begin() const
	{
		return &tab[0];
	}
	iterator end()
	{
		return &tab[count];
	}
	const_iterator end() const
	{
		return &tab[count];
	}

#pragma endregion

public:
	Mapc() = default;
	Mapc(std::initializer_list<KeyValuePair<TKey, TValue>> _tab);
	Mapc(const Mapc& _copy);
	~Mapc();
#pragma region methods
private:
	int IndexOfKey(const TKey& _key) const;
public:
	void Insert(const TKey& _key, const TValue& _value);
	void Insert(const KeyValuePair<TKey, TValue>& _pair);
	TValue& At(const TKey& _key);
	void Clear();
	bool IsEmpty() const;
	void Remove(const TKey& _key);
	bool Contains(const TKey& _key);
#pragma endregion
#pragma region operator
public:
	TValue& operator[] (const TKey& _key);
#pragma endregion

};

#pragma region constructor
template<typename TKey, typename TValue>
Mapc<TKey, TValue>::Mapc(std::initializer_list<KeyValuePair<TKey, TValue>> _tab)
{
	for (KeyValuePair<TKey, TValue> _pair : _tab)
		Insert(_pair);
}

template<typename TKey, typename TValue>
Mapc<TKey, TValue>::Mapc(const Mapc& _copy)
{
	tab = _copy.tab;
	count = _copy.count;
}

template<typename TKey, typename TValue>
Mapc<TKey, TValue>::~Mapc()
{
	delete[] tab;
	count = 0;
	tab = nullptr;
}
#pragma endregion constructor


template<typename TKey, typename TValue>
int Mapc<TKey, TValue>::IndexOfKey(const TKey& _key) const
{
	for (size_t i = 0; i < count; i++)
	{
		if (tab[i].Key() == _key)
			return i;
	}
	return -1;
}

template<typename TKey, typename TValue>
void Mapc<TKey, TValue>::Insert(const TKey& _key, const TValue& _value)
{
	Insert(KeyValuePair<TKey, TValue>(_key,_value));
}

template<typename TKey, typename TValue>
void Mapc<TKey, TValue>::Insert(const KeyValuePair<TKey, TValue>& _pair)
{
	if (Contains(_pair.Key()))
			throw std::exception("key already exist");
	KeyValuePair<TKey, TValue>* _tmp = tab;
	tab = new KeyValuePair<TKey, TValue>[count + 1];
	for (int i = 0; i < count; i++)
		tab[i] = _tmp[i];
	tab[count] = _pair;
	count++;
}

template<typename TKey, typename TValue>
inline TValue& Mapc<TKey, TValue>::At(const TKey& _key)
{
	const int _index = IndexOfKey(_key);
	if (_key == -1) throw std::exception("key doesn't exist !");
	return tab[_index].Value();
	
}

template<typename TKey, typename TValue>
inline void Mapc<TKey, TValue>::Clear()
{
	delete tab;
	count = 0;
	tab = new KeyValuePair<TKey, TValue>[0];
}

template<typename TKey, typename TValue>
inline bool Mapc<TKey, TValue>::IsEmpty() const
{
	return count == 0;
}

template<typename TKey, typename TValue>
inline void Mapc<TKey, TValue>::Remove(const TKey& _key)
{
	const int _index = IndexOfKey(_key);
	if (_index == -1) throw std::exception("key doesn't exist");
	KeyValuePair<TKey, TValue>* _tmp = tab;
	tab = new KeyValuePair<TKey, TValue>[count - 1];
	for (int i = 0; i < _index; i++)
		tab[i] = _tmp[i];
	for (int i = _index + 1;i < count;i++)
		tab[i - 1] = _tmp[i];
	count--;
}

template<typename TKey, typename TValue>
bool Mapc<TKey, TValue>::Contains(const TKey& _key)
{
	return IndexOfKey(_key) != -1;
}

#pragma region operator
template <typename TKey, typename TValue>
TValue& Mapc<TKey, TValue>::operator[] (const TKey& _key)
{
	const int _index = IndexOfKey(_key);
	if (_key == -1) throw std::exception("key doesn't exist !");
	return tab[_index].Value();
}
#pragma endregion

