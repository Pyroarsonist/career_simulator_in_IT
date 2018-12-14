#pragma once
#include "Humanist.h"
#include "Programmer.h"
#include <string>

class Overmind
	:
	public Humanist, public Programmer
{
public:
	Overmind();
	~Overmind();
	Overmind(string name, string surname, int age) : Programmer(name, surname, age) {};
	void getOvermindedInfo();
	void whoAmI();
	void getInfo();
};

