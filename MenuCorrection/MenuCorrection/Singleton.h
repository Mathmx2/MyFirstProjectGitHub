#pragma once
#include <string>

template <typename T>
class Singleton
{
private:
	static inline Singleton* instance = nullptr;
	
public:
	Singleton() = default;
	static Singleton* Instance()
	{
		if (instantce == nullptr)
			instance = new Singleton();
		return instace;
	}
	
};

