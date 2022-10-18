// KeyWord3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define TRUE 1
#define FALSE 0
#define Morgan "Morgan"
#include "Utils.h"
#include <assert.h>

class A
{};

class B : public A
{};

template <typename T>
class List
{
	static_assert(std::is_base_of_v<A, T>, "T must be A");
};

int main()
{
	int a = 1;
	assert(a==0, "a is not 0");
	/*std::cout << TRUE << std::endl;
	std::cout << FALSE << std::endl;
	std::cout << Morgan << std::endl;
	Utils::Log("Debug");*/
}


