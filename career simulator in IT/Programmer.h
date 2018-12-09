#pragma once
#include "Human.h"
#include <string>

class Programmer :
	public Human
{
public:
	Programmer();
	Programmer(string name, string surname, int age) : Human(name, surname, age) {} ;
	void whoAmI();
	void getProgrammerInfo();
	void getInfo();
	~Programmer();
private:
	string *skills;
};

