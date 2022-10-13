// TryTabD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int a, b;
int* tabInt = nullptr;


void SizeTab();
void Tab();
void TriTab();



void SizeTab()
{
	cout << " De quelle taille voulez vous votre tableaux ?" << endl;
	cin >> a;
}

void Tab()
{
	tabInt = new int[a];
	for (size_t i = 0; i < a; i++)
	{
		cout << " Entrez une valeur " << endl;
		cin >> b;
		tabInt[i] = b;
		cout << "tableaux : " << tabInt[i] << endl;
	}

}


void ShowTab()
{
	for (size_t j = 0; j < a; j++)
	{
		cout << tabInt[j] << endl;
	}
}

void TriTab()
{
	for (size_t j = 0; j < a; j++)
	{
		for (size_t i = 0; i < a; i++)
		{
			if (i == a - 1)
			{
				tabInt[i];
			}
			else if (tabInt[i] > tabInt[i + 1])
			{
				int _tmp = tabInt[i];
				tabInt[i] = tabInt[i + 1];
				tabInt[i + 1] = _tmp;
			}
		}
	}
}



int main()
{
	 SizeTab();
	 Tab();
	 TriTab();
	 ShowTab();
	 delete[] tabInt;

}

