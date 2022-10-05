// LinkedListCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "List.h"
int main()
{
	List list = List();
	for (int i = 0; i < 10; i++)
	{
		list.AddFirst(i);
	}
	list.Display();
	list.Removelast();
	list.Display();

	//std::cout << list.Contains(5) << std::endl;
}

/*
   std::vector<int> tab = std::vector<int>();
   tab.push_back();
   tab.emplace_back();
   tab.size();
   tab.erase(tab.begin()+5);
   tab[0] = 5;
   std::cout << tab[0];
   */