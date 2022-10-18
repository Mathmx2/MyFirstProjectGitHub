// StdMapExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MapC.h"
#include <vector>
int main()
{
	Mapc<int, std::string> tab = Mapc<int, std::string>
	{
		{0,"Thomas"},
		{1,"Giusy"},
		{2,"Yoni"}
	};
	for (KeyValuePair<int, std::string> _pair : tab)
	{
		std::cout << _pair.Value() << std::endl;
	}
	return 0;

}

