// ExoConversionCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// 1 - Convertir des valeur
// 2 - Programmer les formules de conversion
// 3 - m -> feet
// 4 - cin / out - 1 choisir le mode 2 entrer la valeur
// 5 result

#pragma region Feet/Meter
string GetFeetFromMeter(float _meter)
{
	float _result = _meter * 3.28f;
	return to_string(_meter) + " m to feet is = " + to_string(_result) + "ft\n";
}
string GetMeterFromFeet(float _meter)
{
	float _result = _meter / 3.28f;
	return to_string(_meter) + " ft to meter is = " + to_string(_result) + "m\n";
}
#pragma endregion

#pragma region Kmh/Knots
string GetKmhFromKts(float _knots)
{
	float _result = _knots * 1.852f;
	return to_string(_knots) + " Kts to km/h is = " + to_string(_result) + "km/h\n";
}
string GetKtsFromKmh(float _knots)
{
	float _result = _knots / 1.852f;
	return to_string(_knots) + " km/h to kts is = " + to_string(_result) + "kts\n";
}
#pragma endregion

#pragma region C/F
string GetCelsiusFromF(float _fTemp)
{
	float _result = (_fTemp -32) * 5.0f / 9;
	return to_string(_fTemp) + " F to C is = " + to_string(_result) + " C\n";
}
string GetFahrFromC(float _fTemp)
{
	float _result = (_fTemp * 1.8) + 32;
	return to_string(_fTemp) + " C to F is = " + to_string(_result) + " F\n";
}
#pragma endregion

#pragma region L/GUS
string GetUSGalFromL(float _l)
{
	float _result = _l / 3.8f;
	return to_string(_l) + " L to US Gallon is = " + to_string(_result) + " G/US\n";
}
string GetLFromUSGal(float _gal)
{
	float _result = _gal * 3.8f;
	return to_string(_gal) + " US Gallon to L is = " + to_string(_result) + " L\n";
}

#pragma endregion

float GetValueToConvert()
{
	cout << "Enter value to convert : ";
	float _value;
	cin >> _value;
	return _value;

}

void ConvertMenu()
{
#pragma region menu
	cout << " 1 - convert feet to meter" << endl;
	cout << " 2 - convert meter to feet" << endl;
	cout << " 3 - convert kmh to kts" << endl;
	cout << " 4 - convert kts to kmh" << endl;
	cout << " 5 - convert C to F" << endl;
	cout << " 6 - convert F to C" << endl;
	cout << " 7 - convert L to G/US" << endl;
	cout << " 8 - convert G/US to L" << endl;
	cout << "[Select number from 1 to 8] : " << endl;
#pragma endregion

	char _input;
	cin >> _input;
	if (_input == '1')
		cout << GetMeterFromFeet(GetValueToConvert());
	else if (_input == '2')
		cout << GetFeetFromMeter(GetValueToConvert());
	else if (_input == '3')
		cout << GetKtsFromKmh(GetValueToConvert());
	else if (_input == '4')
		cout << GetKmhFromKts(GetValueToConvert());
	else if (_input == '5')
		cout << GetFahrFromC(GetValueToConvert());
	else if (_input == '6')
		cout << GetCelsiusFromF(GetValueToConvert());
	else if (_input == '7')
		cout << GetUSGalFromL(GetValueToConvert());
	else if (_input == '8')
		cout << GetLFromUSGal(GetValueToConvert());
	else {
		system("CLS");
		ConvertMenu();
	}

}


int main()
{
	ConvertMenu();
}
