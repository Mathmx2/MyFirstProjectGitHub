// ExDoubleTabMonku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int d = -50,
h = 10,
life = 100,
mooveVertical,
mooveHorizontal = 0, moove;
 const int vertical = 4, horizontal = 4;
char temple[vertical][horizontal] =
	{
		{'-','-','-','-'},
		{'-','-','-','-'},
		{'-','-','-','-'},
		{'-','-','-','-'},
	},
	piegeTemple[vertical][horizontal]
	{
		{'p','h','d','s'},
		{'d','d','h','d'}
	};

void TempleMoove();
void Temple(char );
void ChangeVoie();
void ShowCase();
void Life();




void Temple(char _temple[vertical][horizontal])
{
	for (int i = 0; i < vertical; i++)
	{
		string _tmpLine = "";
		for (int i = 0; i < horizontal; i++)
		{
			_tmpLine += _temple[mooveVertical][mooveHorizontal];
		}
		cout << _tmpLine << endl;
	}
}

void ChangeVoie()
{
	char _tmp;
	cout << "Voulez-vous changez de voie ?  oui ou non ? (O / N) \n";
	cin >> _tmp;
	if (_tmp == 'o')
	{
		TempleMoove();
	}

}

void TempleMoove()
{
	cout << "voulez vous aller en haud (0) ou en bas (1) ?\n";
	cin >> moove;
	mooveVertical = moove == 0 ? mooveVertical - 1 : mooveVertical + 1;
	if (mooveVertical < 0)
	{
		cout << " il y a un mur ";
		mooveVertical += 1;
	}
}
void ShowCase()
{

	if (piegeTemple[mooveVertical][mooveHorizontal] == 'd')
	{
		life += d;
		cout << "vous etes tomber dans un piege !\nIl vous reste " << life << " point de vie\n";
		temple[mooveVertical][mooveHorizontal] = piegeTemple[mooveVertical][mooveHorizontal];
		mooveHorizontal += 1;


	}
	else if (piegeTemple[mooveVertical][mooveHorizontal] == 'h')
	{
		life += h;
		cout << "vous etes tomber sur du heal !\nIl vous reste " << life << " point de vie\n";
		temple[mooveVertical][mooveHorizontal] = piegeTemple[mooveVertical][mooveHorizontal];
		mooveHorizontal += 1;
	}
	else
	{
		cout << "Bravo vous avez trouver la sorti" << endl;
	}
}

void Life()
{

	if (life <= 0)
	{
		cout << " vous etes mort \n";
	}
}


int main()
{
	//for (int i = 0; i < horizontal; i++)
	{
		Temple(temple);
		//ChangeVoie();
		//ShowCase();
		//Life();
	}
}

