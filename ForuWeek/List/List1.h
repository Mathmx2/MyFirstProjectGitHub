#pragma once
#include <initializer_list>
#include <iostream>
using namespace std;

class List
{
private:
	int data;
	int index;
	int* list= nullptr;
	int count = 0;
public:
	
	void Count1()
	{
		count++;
		cout << "Count : " << count << endl;
	}

	void Add(int _data)
	{
		data = _data;
		list[count] = data;
		Count1();
	}

	void RemoveAll(int _data)
	{
		for (int i = 0; i < count; i++)
		{
			if (list[i] == _data)
			{
				delete& list[i];
				count--;
			}
		}
	}

	void Display()
	{
		for (int i = 0; i < count; i++)
		{
			cout << list[i] << endl;
		}
	}
	
	void Clear1()
	{
		list = nullptr;
	}
};

