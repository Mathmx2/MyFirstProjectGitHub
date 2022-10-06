#pragma once
#include <string>
#include <map>


class FileStream;

class Language
{
private:
	std::string languageName = "";
	std::string filePath = "";
	FileStream* stream = nullptr;
	std::map<std::string, std::string> allMessages = std::map<std::string, std::string>();
public:
	Language() = default;

	Language(const std::string& _languageName);
	~Language();

	void InitMessages();
};

