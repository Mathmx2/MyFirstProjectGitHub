#include "Client.h"

#pragma region constructor
Client::Client()
{
	count = 0;
	infoClient = new std::string[0];
}

inline Client::Client(std::initializer_list<std::string> _infoClient)
{
	count = 0;
	infoClient = new std::string[0];
	for (int i = 0; i < count; i++)
		AddClient();
}
#pragma endregion constructor

#pragma region methods
void Client::AddClient()
{
	std::string* _tmp = infoClient;
	infoClient = new std::string[count];

	for (int i = 0; i < count; i++)
	{
		infoClient[i] = _tmp[i];
	}	
	infoClient = new std::string[count+5];

	std::cout << "client first name :" << std::endl;
	std::cin >> firstName;
	infoClient[count] = firstName;
	count++;

	std::cout << "client last name :" << std::endl;
	std::cin >> lastName;
	infoClient[count] = lastName;
	count++;

	std::cout << "client age :" << std::endl;
	std::cin >> age;
	infoClient[count] = age;
	count++;

	std::cout << "arrival date" << std::endl;
	std::cin >> arrivalTime;
	infoClient[count] = arrivalTime;
	count++;

	std::cout << "departure date" << std::endl;
	std::cin >> departureDate;
	infoClient[count] = departureDate;
	count++;

}
void Client::Remove()
{
	delete[] infoClient;
	count = 0;
}
void Client::DisplayClient()
{
	for (int i = 0; i < count; i++)
		std::cout << infoClient[i] << std::endl;
}
#pragma endregion
