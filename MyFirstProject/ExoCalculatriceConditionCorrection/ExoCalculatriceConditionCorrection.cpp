// ExoCalculatriceConditionCorrection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int x, y;

//void TestMethod(bool _canWork)
//{
//	if (_canWork == false)
//		return;
//}




char ChooseSign()
{
	cout << "Set operator (+, *, /, -) : " << endl;
	char _tmpResult;
	cin >> _tmpResult;
	return _tmpResult;

}
void SetMember()
{
	cout << "Set X Member : " << endl;
	cin >> x;
	cout << "Set Y Member : " << endl;
	cin >> y;
}
int Add(int _a, int _b)
{
	return _a + _b;
}
int Sub(int _a, int _b)
{
	return _a - _b;
}
int Multiply(int _a, int _b)
{
	return _a * _b;
}
int Divide(int _a, int _b)
{
	if (_b == 0)
		return 0;
	return _a / _b;
}
void SelectCalculator(char _mode, int _x, int _y)
{
	if (_mode == '+')
		cout << "Result : " << Add(_x, _y);
	else if (_mode == '*' || _mode == 'x' || _mode == 'X')
		cout << "Result : " << Multiply(_x, _y);
	else if (_mode == '/')
		cout << "Result : " << Divide(_x, _y);
	else if (_mode == '-')
		cout << "Result : " << Sub(_x, _y);
	else
		SelectCalculator(ChooseSign(), x, y);
}


int main()
{
	SetMember();
	SelectCalculator(ChooseSign(), x, y);
}

