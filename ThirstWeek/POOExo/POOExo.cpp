// POOExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class A
{
protected:
	std::string name = "";
public:
	A() = default;
	A(std::string _name)
	{
		name = _name;
	}
	std::string Name()
	{
		return name;
	}
};

class B : public A
{
public:
	B()
	{
		name = "B";
	}

};

class C : public B
{
	int age;
	C()
	{
		name = "C";
		age = 50;
	}

};


int main()
{
	A p;
}
