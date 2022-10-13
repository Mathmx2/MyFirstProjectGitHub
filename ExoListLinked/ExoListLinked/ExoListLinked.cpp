// ExoListLinked.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "List.h"
#include <string>

int main()
{
	List<std::string> _list = List<std::string>();
	_list.AddFirst("Hello");
	//_list.AddLast("world");
	//_list.At(10);
	_list.Display();

	//_list.AddBefore("Hello" , "Toto");

	//_list.Display();

	/*List<int> _list = List<int>();
	_list.AddLast(0);
	_list.AddLast(1);

	try
	{

	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}*/

	return 0;


}

