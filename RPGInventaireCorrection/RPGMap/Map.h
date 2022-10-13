#pragma once
#include <string>
#include <filesystem>
class Map
{
private:
	std::string name = "";
	int x, y;
#pragma region constructor
public:
	Map() = default;
	Map(std::string& _name);
	Map	(const Map& _copy);
	~Map();
#pragma endregion constructor

public:
	void InitialiseMap(std::string _tab);
	bool MapExist();
	void SetCursor();
	void DisplayMap();



};

