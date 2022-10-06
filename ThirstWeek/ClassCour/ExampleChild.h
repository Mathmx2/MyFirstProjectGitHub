#pragma once
#include "Example.h"
class Example;


class ExampleChild : public Example
{
	Example* example = nullptr;
	ExampleChild();
};

