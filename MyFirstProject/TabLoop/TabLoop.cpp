// TabLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a = 10;
int tabA[] = {10,5,4,30,9};
float tabB[2];
//tableaux de taille 5 
//array size 5
//array length 5 (longueur)
//0,1,2,3,4


int main()
{
	//tabB[0] = 12.45f;
	//tabB[1] = 42.45f;
	//cout << tabB[0] << " " << tabB[1] << endl;
	//[i] index = 0, n
	/*return 0;
	cout << tabA[0] << endl;//10
	cout << tabA[1] << endl;//5
	cout << tabA[2] << endl;//4
	cout << tabA[3] << endl;//30
	cout << tabA[4] << endl;//9*/
	//cout << tabA[5] << endl;//crash
	//index out of range < 0 > size()
	int _example[10];

	for (int i = 0; i < 10 ; i++ )
	{
		_example[i] = 100;
		cout << _example[i] << endl;
		//do something 
	}

}

