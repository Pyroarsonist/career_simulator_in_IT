#pragma once
#include "Human.h"
class Programmer :
	public Human
{
public:
	Programmer();
	~Programmer();
private:
	string *skills;
};

