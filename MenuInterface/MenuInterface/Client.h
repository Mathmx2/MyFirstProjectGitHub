#pragma once
#include <iostream>
#include <initializer_list>
#include "Reservation.h"

class Client
{
#pragma region f/p
	std::string firstName = "";
	std::string lastName = "";
	int age = 0;
	int arrivalTime = 0;
	int departureDate = 0;
	int count = 0;
	std::string* infoClient = nullptr;
#pragma endregion

#pragma region constructor
	Client() = default;
	Client();
	Client(std::initializer_list<std::string> _infoClient);
#pragma endregion

#pragma region methods
	void AddClient();
	void Remove();
	void DisplayClient();
#pragma endregion

};

