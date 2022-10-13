#pragma once
class Utils
{
#pragma region methods
public:
	template <typename T>
	static T Clamp(const T& _value, const T& _min, const T& _max);

	template <typename T>
	static T UserChoise(const std::string& _msg);

#pragma endregion

};

template<typename T>
inline T Utils::Clamp(const T& _value, const T& _min, const T& _max)
{
	if (_value < _min) return _min;
	if (_value > _max) return _max;
	return _value;
}
