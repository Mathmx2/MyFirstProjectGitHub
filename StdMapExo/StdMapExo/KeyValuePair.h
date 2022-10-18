#pragma once

template <typename TKey, typename TValue>

class KeyValuePair
{
#pragma region f/p
private:
	TKey key = TKey();
	TValue value = TValue();
#pragma endregion
#pragma region constructor
public:
	KeyValuePair() = default;
	KeyValuePair(const TKey _key, const TValue _value);
	KeyValuePair(const KeyValuePair& _copy);
#pragma endregion
#pragma region methods
public:
	TKey Key() const;
	TValue& Value();
#pragma endregion


};

template<typename TKey, typename TValue>
KeyValuePair<TKey, TValue>::KeyValuePair(const TKey _key, const TValue _value)
{
	key = _key;
	value = _value;
}

template<typename TKey, typename TValue>
KeyValuePair<TKey, TValue>::KeyValuePair(const KeyValuePair& _copy)
{
	key = _copy.key;
	value = _copy.value;
}

template<typename TKey, typename TValue>
TKey KeyValuePair<TKey, TValue>::Key() const
{
	return key;
}

template<typename TKey, typename TValue>
TValue& KeyValuePair<TKey, TValue>::Value()
{
	return value;
}
