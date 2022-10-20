#include "Reservation.h"
#include "Client.h"

#pragma region constructor
Reservation::Reservation()
{
	length = 0;
	client = new Client();
}
Reservation::Reservation(std::initializer_list<std::string> _client)
{
	length = 0;
	client = new Client();
	for (int i = 0; i < length; i++)
		Add();
}

Reservation::~Reservation()
{
	delete[] client;
	length = 0;
}


#pragma endregion constructor

void Reservation::Add()
{

}

void Reservation::Remove()
{
}

void Reservation::DisplayBooking()
{
}
