#pragma once
#include <fstream>
#include <string>
#include <vector>


class FileReader
{
private:
	std::string path = "";
	std::ifstream stream = std::ifstream();

public:
	FileReader() = default;
	FileReader(const std::string& _path);
	FileReader(const FileReader& _copy);

#pragma region methods
public :
	bool IsOpen() const;
	void Close();
	std::vector<std::string> GetAllLine();
#pragma endregion methods

};

