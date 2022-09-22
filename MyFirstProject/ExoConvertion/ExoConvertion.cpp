// ExoConvertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char option;
float number;

float SetNumber()
{
	cout << "Rentrer votre valeur\n";
	float _number;
	cin >> _number;
	return _number;
}

#pragma region Function calcul
void KilometerNoeud(float _number)
{
	float _result = _number * 0.54f;
	cout << _number << " KM/h = " << _result << " Kn\n ";
}
void NoeudKilometer(float _number)
{
	float _result = _number * 1.852f;
	cout << _number << " Kn = " << _result << " KM/h\n ";
}
void CelciusFar(float _number)
{
	float _result = (_number * (9/5))+32;
	cout << _number << " °C = " << _result << " °F\n ";
}
void FarCelcius(float _number)
{
	float _result = (_number - 32 )* (5/9);
	cout << _number << " °F = " << _result << " °C\n ";
}
void LitreGallonUs(float _number)
{
	float _result = _number * 0.264f;
	cout << _number << " L = " << _result << " Gal US\n ";
}
void GalllonUsLitre(float _number)
{
	float _result = _number * 3.788f;
	cout << _number << " Gal US = " << _result << " L\n ";
}
void FeetMeter(float _number)
{
	float _result = _number * 0.3048f;
	cout << _number << " ft = " << _result << " m\n ";
}
void MeterFeet(float _number)
{
	float _result = _number / 0.3048f;
	cout << _number << " m = " << _result << " ft\n ";
}
#pragma endregion

void ShowOption()
{
	cout << "Les option sont : \n"
		<< "1 : Kilometer per hour to Knots \n"
		<< "2 : Knots to Kilometer per hour\n"
		<< "3 : Celcius to fahrenheit \n"
		<< "4 : fahrenheit to Celcius \n"
		<< "5 : Litre to Gallon US\n"
		<< "6 : Gallon US to litre\n"
		<< "7 : Feet to Meter \n"
		<< "8 : Meter to Feet \n";
}

void ChooseOption(_option)
{

	cout << "Quelle option voulez vous ? ( 1 a 8 )\n";
	cin >> _option;
	if (_option == '1')
	{
		KilometerNoeud(SetNumber());
	}
	else if (_option == '2')
	{
		NoeudKilometer(SetNumber());
	}
	else if (_option == '3')
	{
		CelciusFar(SetNumber());
	}
	else if (_option == '4')
	{
		FarCelcius(SetNumber());
	}
	else if (_option == '5')
	{
		LitreGallonUs(SetNumber());
	}
	else if (_option == '6')
	{
		GalllonUsLitre(SetNumber());
	}
	else if (_option == '7')
	{
		FeetMeter(SetNumber());
	}
	else if (_option == '8')
	{
		MeterFeet(SetNumber());
	}
	else
	{
		cout << "Faux !\n";
		ChooseOption(option);
	}
}


int main()
{
	SetNumber();
	ShowOption();
	ChooseOption(option);

}
