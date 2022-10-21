#pragma once
#include "Object.h"

template <typename T>
class Singleton : public Object
{
#pragma region f/p
private:
	static inline T* instance = nullptr;
#pragma endregion
#pragma region constructor/destructor
public:
	Singleton() = default;
	~Singleton() override
	{
		OnDestroy();
	}
#pragma endregion
#pragma region methods
public:
	virtual void OnDestroy() {}
	T* Instance()
	{
		if (instantce == nullptr)
			instance = new T();
		return instance;
	}
#pragma endregion




};