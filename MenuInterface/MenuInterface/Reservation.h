#pragma once
#include <string>
#include <iostream>
#include <initializer_list>
#include "Client.h"

class Reservation 
{
#pragma region f/p
	Client* client = nullptr;
	int length = 0;
#pragma endregion
#pragma region constructor
	Reservation() = default;
	Reservation();
	Reservation(std::initializer_list<std::string> _client);
	~Reservation();
#pragma endregion
#pragma region methods
	void Add();
	void Remove();
	void DisplayBooking();
#pragma endregion

};

