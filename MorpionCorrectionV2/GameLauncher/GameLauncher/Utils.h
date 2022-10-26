#pragma once
#include <string>
#include <iostream>
#include <windows.h>
#pragma warning(disable: 4996)
class Object;

#define color_white 15
#define color_red 4

class Utils
{
#pragma region f/p
private:
	static inline HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	static inline COORD cursorPosition = {};
#pragma endregion f/p
#pragma region Log
public:
	static void Log(const std::string& _msg);
	static void Log(const Object& _obj);
	static void Log(const Object* _obj);
	static void LogError(const std::string& _msg);
	static void LogError(const Object& _obj);
	static void LogError(const Object* _obj);
	static void LogTitle(const std::string& _title);
	static void LogTitleFrame(const std::string& _title);
	static void LoadingBar(const std::string& _msg);
#pragma endregion Log
#pragma region Utils
public:
	static int CinNoBlock();
	static std::string Underline(const std::string& _str);
	static std::string Frame(const std::string& _str);
	static void ClearConsole();
	static void Pause();
	static std::string Separator(const int _count = 10, const char _c = '=');
	static void SetCursorPosition(const int _x, const int _y);
	template<typename T>
	static T UserChoice(const std::string& _msg = "");
	template<typename T>
	static T UserChoice(const std::string& _msg, const T& _defaultValue, const T& _a, const T& _b);
	template<typename T>
	static T UserChoice(const std::string& _msg, const T& _defaultValue, const T& _a, const T& _b, const T& _c);
	template<typename T>
	static T UserChoice(const std::string& _msg, const T& _defaultValue, const T& _a, const T& _b, const T& _c, const std::string& _msg2);
#pragma endregion Utils

};

template<typename T>
inline T Utils::UserChoice(const std::string& _msg)
{
	if (_msg != "") Log(_msg);
	T _result = T();
	std::cin >> _result;
	return _result;
}

template<typename T>
inline T Utils::UserChoice(const std::string& _msg, const T& _defaultValue, const T& _a, const T& _b)
{
	if (_msg != "") Log(_msg);
	T _result = _defaultValue;
	while (_result != _a && _result != _b)
		std::cin >> _result;
	return _result;
}

template<typename T>
inline T Utils::UserChoice(const std::string& _msg, const T& _defaultValue, const T& _a, const T& _b, const T& _c)
{
	if (_msg != "") Log(_msg);
	T _result = _defaultValue;
	while (_result != _a && _result != _b && _result != _c)
		std::cin >> _result;
	return _result;
}

template<typename T>
inline T Utils::UserChoice(const std::string& _msg, const T& _defaultValue, const T& _a, const T& _b, const T& _c ,const std::string& _msg2)
{
	if (_msg != "") Log(_msg);
	std::cout << std::endl;
	if (_msg2 != "") Log(_msg2);
	T _result = _defaultValue;
	while (_result != _a && _result != _b && _result != _c)
		std::cin >> _result;
	return _result;
}