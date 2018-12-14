#include "stdafx.h"
#include "Programmer.h"


Programmer::Programmer()
{
	skills = new string[10];
}


Programmer::~Programmer()
{
}

void Programmer::whoAmI() {
	cout << "I am programmer\n";
}

void Programmer::getProgrammerInfo() {
	cout << "I love programming\n";
}

void Programmer::getInfo() {
	getProgrammerInfo();
}