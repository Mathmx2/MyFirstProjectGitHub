// Condition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isValid = true, 
	 notValid = false;

void TestBool()
{
	if (isValid == false)
	{
		std::cout << "Faux !\n";
	}
	else if (notValid == false)
	{
		std::cout << "Not valid !\n";
	}
	else
	{
		std::cout << "Vrai !\n";
	}
	std::cout << "Next";
}







int main()
{
	TestBool();
}

