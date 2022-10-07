// Traduction Exo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Environment.h"
#include "Utils.h"
#include "StringUtils.h"
#include "Path.h"
#include "Directory.h"
#include "File.h"
#include "FileReader.h"
#include "FileWriter.h"
#include "FileStream.h"
#include "TranslateManager.h"
#include "Language.h"
int main()
{

	//setlocale(LC_ALL, "");
	
	TranslateManager manager = TranslateManager();
	Utils::Log(manager.GetMessage("fr", "hello"));
	Utils::Log(manager.GetMessage("en", "hello"));
	/*std::string _str = "salut comment vas tu ?";
	StringUtils::Replace(_str, " ", "");
	Utils::Log(_str);*/



	/*FileWriter fileW = FileWriter("C:\\Users\\MARE1001\\Documents\\GitHub\\MyFirstProjectGitHub\\ThirstWeek\\Text.txt");
	fileW.Write("Benoit");
	fileW.Write("Gabriel");
	fileW.Write("Aymeric");



	FileReader file = FileReader("C:\\Users\\MARE1001\\Documents\\GitHub\\MyFirstProjectGitHub\\ThirstWeek\\Text.txt");
	std::vector<std::string> _allLines = file.GetAllLine();
	for (int i = 0; i < _allLines.size();i++)
		Utils::Log(_allLines[i]);*/

	/*FileStream* _stream = File::Create("C:\\Users\\MARE1001\\Documents\\GitHub\\MyFirstProjectGitHub\\ThirstWeek\\Text.txt");
	_stream->Writer()->Write("Test");
	std::vector<std::string> _allLines = _stream->Reader()->GetAllLine();
	for (int i = 0; i < _allLines.size();i++)
		Utils::Log(_allLines[i]);
	_stream->Writer()->Clear();
	_allLines = _stream->Reader()->GetAllLine();
	for (int i = 0; i < _allLines.size();i++)
		Utils::Log(_allLines[i]);
	_stream->Close();*/



	/*FileStream* _stream = File::Create("C:\\Users\\MARE1001\\Documents\\GitHub\\MyFirstProjectGitHub\\ThirstWeek\\Text.txt");
	_stream->Writer()->Write("PlayerName : Toto");

	std::vector<std::string>_allLines = _stream->Reader()->GetAllLine();
	for (int i = 0; i < _allLines.size();i++)
		Utils::Log(_allLines[i]);
	_stream->Close();*/



	/*if (Directory::Exist(Environment::CurrentDirectory()))
		Utils::Log("exist ! ");
	Directory::Create(Path::GetPath("C:\\Test"));
	if (!Directory::Exist("C:\\Test"))
		Utils::Log("test doesn't exist ! ");
	else Utils::Log("test exist !");

	if (Directory::Delete("C:\\Test"))
	{
		Utils::Log("test deleted ! ");
	}*/

	/*Directory d =Directory(Environment::CurrentDirectory());*/





}
