// CaseTete1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//string text1 = "poiuytrewq123456789";
//string text2 = "I like to code";
//string text3 = "iw3";

//string text1 = "$%?!<[]{}-\''&/*>e";
//string text2 = "I use arch, btw";
//string text3 = "?";

string text1 = "zxcvbnm9876$#";
string text2 = "I like pizza!";
string text3 = "$";

string result = "";

void Transfo()
{
	for (int a = 0; a < text3.size(); a++)
	{
		for (int i = 0; i < text1.size(); i++)
		{
			if (text3[a] == text1[i])
			{
				result += text2[i];
			}
		}
		
	}
}


int main()
{
	//Transfo();
	//cout << result;
	for (char c : text3)
		cout << text2[text1.find(c)];

}

