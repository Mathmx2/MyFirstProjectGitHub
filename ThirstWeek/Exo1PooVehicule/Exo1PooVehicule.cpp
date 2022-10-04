// Exo1PooVehicule.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



class Vehicule
{
protected:
	string name = "";
public:
	string Name()
	{
		return name;
	}
public:
	Vehicule() = default;
	Vehicule(const string _name)
	{
		name = _name;
	}

};

class LandVehicle : public Vehicule
{
protected:
	int wheels = 0;
public:
	int wheels()
	{
		return wheels;
	}
	LandVehicle() = default;
	LandVehicle(const string _name) : Vehicule(_name) {	}
};

class Car : public LandVehicle
{
public:
	Car() : LandVehicle("Car")
	{
		wheels = 4;
	}
};

class Motorcycle : public LandVehicle
{
public:
	Motorcycle() : LandVehicle("Motorcycle")
	{
		wheels = 4;
	}
};

class Plane : public Vehicule
{
private:
	int wheels = 0;
	int engine = 0;
public:
	int Wheels()
	{
		return wheels;
	}
	int Engine()
	{
		return engine;
	}
public:
	Plane() = default;
	Plane(const string _name, int _wheels = 8, int _engine = 2) : Vehicule(_name)
	{
		wheels = _wheels;
		engine = _engine;
	}

};

int main()
{

}

