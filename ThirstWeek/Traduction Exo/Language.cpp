#include "Language.h"
#include "TranslateManager.h"
#include "Path.h"
#include "Environment.h"
#include "File.h"
#include "FileStream.h"
#include "FileReader.h"
#include <vector>
Language::Language(const std::string& _languageName)
{
	languageName = _languageName;
	filePath = Path::Combine(Environment::CurrentDirectory(), "language", _languageName);
	stream = File::Create(filePath);
}

Language::~Language()
{
	stream->Close();
	delete stream;
	stream = nullptr;
}

void Language::InitMessages()
{
	if (!stream->IsValid()) return;
	const std::vector<std::string> _allLines = stream->Reader()->GetAllLines();
	for (int i = 0; i < _allLines.size();i++)
	{
		const std::string _line = _allLines[i];
		std::string _key = _line.substr(0, _line.find_first_of(':'));
		if (allMessages.contains(_key)) continue;
		std::string _message = _line.substr(_line.find_first_of(':') + 1);
		allMessages.insert(std::pair(_key, _message));
	}

}
