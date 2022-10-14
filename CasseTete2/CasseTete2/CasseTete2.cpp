// CasseTete2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

std::string str = "067111100105110103";
//std::string* tab = nullptr;
std::string tab[6][3] = { {}, {}, {}, {}, {}, {} };
int k = 0, j;
void CasseTete()
{

	for (int i = 0; i < str.size();i++)
	{
		k = k + 1;
		if (k == 3)
		{
			k = 0;
			j++;
		}
		
		tab[j][k] += str[i];
		
	}

}


int main()
{
	for (int i = 0; i < str.size();i++)
		std::cout << *tab[i] << std::endl;
}

