#pragma once
#include "Object.h"



class DateTime
{
#pragma region f/p
private:
	int day = 0;
	int month = 0;
	int years = 0;
	int hour = 0;
	int minute = 0;
	int second = 0;
public :
	DateTime Now;
#pragma endregion
#pragma region constructor
public:
	DateTime() = default;
	DateTime(const int _day, const int _month , const int _years , const int _hour, const int _minute , const int _second);
	DateTime(const DateTime& _copy);
#pragma endregion
#pragma region methods
public:
	static DateTime Parse(const std::string& _str);
#pragma endregion
#pragma region override
	std::string ToString() const override;
#pragma endregion


};

