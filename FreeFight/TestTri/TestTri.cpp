// TestTri.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#pragma region include
#include <iostream>
using namespace std;
#pragma endregion

#pragma region Variable
const int sizeTab = 7;
int Age[sizeTab] = { 21, 19, 30 ,40 ,26 , 22, 75};
#pragma endregion


void TriAge()
{
	for (int a = 0; a < sizeTab; a++)
	{
		for (int i = 0; i < sizeTab; i++)
		{
			if (i == sizeTab - 1)
			{
				
			}
			else if (Age[i] > Age[i + 1])
			{
				
				int _Age = Age[i];
				Age[i] = Age[i + 1];
				Age[i + 1] = _Age;

			}
			else
			{
				
			}
		}
	}
}

void ShowList()
{
	for (int c = 0; c < sizeTab; c++)
	{
		cout << Age[c] << endl;
	}
}

int main()
{
	TriAge();
	ShowList();
}

