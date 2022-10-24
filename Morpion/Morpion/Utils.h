#pragma once
#include <iostream>

class Utils
{
#pragma region Utils
public:
	template<typename T>
	static T UserChoice(const std::string& _msg);
	void ClearConsole();
#pragma endregion
};

template<typename T>
inline T Utils::UserChoice(const std::string& _msg)
{
	std::cout << _msg << std::endl;
	T _result= T();
	std::cin >> _result;
	return _result;
}