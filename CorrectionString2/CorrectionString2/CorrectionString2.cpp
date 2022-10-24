// CorrectionString2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "String.h"
int main()
{
	/*String _str = "how are you ?";
	std::cout << _str.Trim() << std::endl;
	std::cout << _str.Replace('o','a') << std::endl;
	String _result = _str.Join({ "Damien" , " Samy" });
	std::cout << _result << std::endl;*/

	String _str = "Hello World";
	std::cout << _str.SubString(0, _str.FirstIndexOf(' '));
	std::string _s = "Hello World";
	std::cout << _s.substr(0, _s.find_last_of('d')) << std::endl;




	/*String _lower = _str.ToLower();
	std::cout << String("lower: ") + _lower << std::endl;
	String _upper = _str.ToUpper();
	std::cout << String("upper; ") + _upper << std::endl;
	std::vector<String> _splited = _str.Split(',');
	std::cout << "Splited: " << std::endl;
	for (String _s : _splited)
	{
		std::cout << _s << std::endl;
	}*/
}

