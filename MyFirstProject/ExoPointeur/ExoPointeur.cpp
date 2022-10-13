// ExoPointeur.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int a= 10, b = 43;
int* AddressOf(int _i);
void RefExample(int& _value);
void SwapAB(int& _a, int& _b);

void RefExample(int& _value)
{
	// copy
	_value *= 2;
}

void SwapAB(int& _a, int& _b)
{
	int _tmp = _a;
	_a = _b;
	_b = _tmp;
}


int DoubleInt(int _a)
{
	int* _ptrA = new int (a);
	cout << _ptrA << endl;
	int _result = *_ptrA * 2;
	delete _ptrA;
	return _result;
}
int* AddressOf(int _i)
{
	return &_i;
}


int main()
{
	char* _chaine = new char[3];
	_chaine[0] = 'S';
	_chaine[1] = 'T';
	_chaine[2] = '\0';
	cout << _chaine << endl;

	delete[] _chaine;



	int* _tabInt = new int[10];
	for (size_t i = 0; i < 10 ; i++)
	{
		_tabInt[i] = i;
		cout << _tabInt[i] << endl;
	}
	cout << _tabInt << endl;
	cout << &_tabInt[0] << endl;
	cout << &_tabInt[1] << endl;

	delete[] _tabInt;



	return 0;
	cout << a << endl;
	RefExample(a);
	cout << a << endl;

	cout << a << " " << b <<endl;
	SwapAB(a, b);
	cout << a << " " << b << endl;
	int* _aPtr = &a;
	if (_aPtr)
		return 0;
	if (!_aPtr)
		return 0;


	//cout << DoubleInt(a) << endl;
	//cout << AddressOf(a) << endl;

}

