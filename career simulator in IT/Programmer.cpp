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