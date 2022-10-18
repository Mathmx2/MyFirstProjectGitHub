#pragma once
#include <iostream>
#include <string>
#include "SciptingSymbol.h"

class Utils
{
public:
	static void Log(const std::string& _msg)
	{
#ifdef DEBUG
		std::cout << "[Log] => " << _msg << std::endl;
#elif RELEASE
		std::cout << "[RELEASE] => " << _msg << std::endl;
#else
		std::cout << "[MASTER] => " << _msg << std::endl;

#endif
	}
};

