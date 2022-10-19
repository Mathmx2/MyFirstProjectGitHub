#pragma once
#include <string>
#include <iostream>

class String
{
#pragma region f/p
private:
	char* value = nullptr;
	int mLength = 0;
	char* mValue = 0;
#pragma endregion
#pragma region constructor
public:
	String() = default;
	String(const char* _value);
#pragma endregion
#pragma region methods
public:
	char ToLower() const;
	char ToUpper() const;
	bool IsNullOrEmpty(const String& _str);
	bool Contains(const char _value);
	String Replace(const char _oldChar, const char _newChar) const;
	String Replace(const char _old, const char _new) const;
	int FirstIndexOf(const char _c) const;	
	//int FirstIndexOf(const String& _str) const;
	int LastIndexOf(const char _c) const;
	void Split(const String& _value);
	void Join(const String& _value);

#pragma endregion

};
String::String(const char* _value)
{
#pragma warning(disable: 4996)

	if (_value == nullptr) _value = "";
	const int _otherLength = strlen(_value);
	const int& _length = mLength;
	const int _newLength = _length + _otherLength;
	char* _char = new char[_newLength + 1];
	// ReSharper disable CppDeprecatedEntity
	strcpy(_char, mValue);
	// ReSharper disable once CppDeprecatedEntity
	strcat(_char, _value);
	mValue = _char;
	mLength = _newLength;
}

char String::ToLower() const
{
	switch (true)
	{
	case 'A':
		return 'a';
		break;
	case 'B':
		return 'b';
		break;
	case 'C':
		return 'c';
		break;
	case 'D':
		return 'd';
		break;
	case 'E':
		return 'e';
		break;
	case 'F':
		return 'f';
		break;
	case 'G':
		return 'g';
		break;
	case 'H':
		return 'h';
		break;
	case 'I':
		return 'i';
		break;
	case 'J':
		return 'j';
		break;
	case 'K':
		return 'k';
		break;
	case 'L':
		return 'l';
		break;
	case 'M':
		return 'm';
		break;
	case 'N':
		return 'n';
		break;
	case 'O':
		return 'o';
		break;
	case 'P':
		return 'p';
		break;
	case 'Q':
		return 'q';
		break;
	case 'R':
		return 'r';
		break;
	case 'S':
		return 's';
		break;
	case 'T':
		return 't';
		break;
	case 'U':
		return 'u';
		break;
	case 'V':
		return 'v';
		break;
	case 'W':
		return 'w';
		break;
	case 'X':
		return 'x';
		break;
	case 'Y':
		return 'y';
		break;
	case 'Z':
		return 'z';
		break;
	default:
		break;
	}
}

char String::ToUpper() const
{
	switch (true)
	{
	case 'a':
		return 'A';
		break;
	case 'b':
		return 'B';
		break;
	case 'c':
		return 'C';
		break;
	case 'd':
		return 'D';
		break;
	case 'e':
		return 'E';
		break;
	case 'f':
		return 'F';
		break;
	case 'g':
		return 'G';
		break;
	case 'h':
		return 'H';
		break;
	case 'i':
		return 'I';
		break;
	case 'j':
		return 'J';
		break;
	case 'k':
		return 'K';
		break;
	case 'l':
		return 'L';
		break;
	case 'm':
		return 'M';
		break;
	case 'n':
		return 'N';
		break;
	case 'o':
		return 'O';
		break;
	case 'p':
		return 'P';
		break;
	case 'q':
		return 'Q';
		break;
	case 'r':
		return 'R';
		break;
	case 's':
		return 'S';
		break;
	case 't':
		return 'T';
		break;
	case 'u':
		return 'U';
		break;
	case 'v':
		return 'V';
		break;
	case 'w':
		return 'W';
		break;
	case 'x':
		return 'X';
		break;
	case 'y':
		return 'Y';
		break;
	case 'z':
		return 'Z';
		break;
	default:
		break;
	}
}

inline bool String::IsNullOrEmpty(const String& _str)
{
	return _str.mValue == "";
}
inline bool String::Contains(const char _value)
{
	for (int _index = 0; _index < mLength;_index++)
	{
		if (value[_index] == _value)
			return true;
		else
			return false;
	}
}
inline String String::Replace(const char _oldChar, const char _newChar) const
{
	for (int _index = 0; _index < mLength;_index++)
	{
		if (_oldChar == value[_index])
		{
			value[_index] = _newChar;
		}
	}

}
inline int String::FirstIndexOf(const char _c) const
{
	 for (int _index= 0; _index < mLength;_index++)
	 {
		 if (value[_index] == _c)
			 return _index;
	 };
}
//inline int String::FirstIndexOf(const String& _str) const
//{
//	return 0;
//}
inline int String::LastIndexOf(const char _c) const
{
	return ;
}

inline void String::Split(const String& _value)
{
	const char* _tmp = value;
	for (int i = 0; mLength; i++)
	{
		if (_value == value[i])
		{
			std::cout << std::endl;
		}
	}
}

void String::Join(const String& _value)
{

}