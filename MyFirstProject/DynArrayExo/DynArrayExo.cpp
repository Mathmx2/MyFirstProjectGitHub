// DynArrayExo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int index=1;
//int* intArray = nullptr;
int sizeArray = 1;

int *intArray = new int[sizeArray];


void Add(int _value);
void Read();



void Read()
{
	for (size_t i = 0; i < sizeArray; i++)
		cout << intArray[i] << endl;
}


void Add(int _value)
{
	sizeArray = sizeArray <= 0 ? 1 : sizeArray;
	intArray[sizeArray-1] = _value;
	sizeArray += 1;

}


void Clear()
{
	delete[] intArray;
}


int main()
{
	Read();
	Add(5);
	Add(6);
	Read();
	Clear();
}

