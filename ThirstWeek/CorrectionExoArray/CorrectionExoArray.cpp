// CorrectionExoArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Array.h"




int main()
{
	Array<int> _tab = Array<int>(10);
	for (int i = 0; i < 10; i++)
		_tab[i] = i;

	_tab.Resize(4);
}

