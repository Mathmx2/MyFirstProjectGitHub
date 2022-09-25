// PtrExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int a = 5 , b = 8 , c = 10;
int* ptrA = nullptr;
int* ptrB = nullptr;

void SwapAB();

void SwapAB(int* _a, int* _b)
{

	int _tmp = *_a;
	 *_a = *_b;
	*_b = _tmp;

}

int Example()
{
	int* _a = new int(54);
	int _b = *_a;
	delete _a;
	return _b;
}

int main()
{

	int* _integer = new int(5);
	cout << _integer << endl;
	cout << *_integer << endl;
	*_integer = 100;
	cout << *_integer << endl;
	delete _integer;


	return 0;





	cout << a << " " << b << endl;
	SwapAB(&a, &b);
	cout << a << " " << b << endl;


	/*
	ptrA = &a;
	ptrA += 1;

	cout << *ptrA << endl;


	
	cout << a << endl;
	ptrA = &a;
	*ptrA = 8;
	cout << a << endl;
	
	cout << ptrA << endl;
	cout << *ptrA << endl;

	ptrA = &b;

	cout << ptrA << endl;
	cout << *ptrA << endl;


	ptrA = &c;
	cout << ptrA << endl;
	cout << *ptrA << endl;
	*/


}

