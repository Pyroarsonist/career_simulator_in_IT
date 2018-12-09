#include "stdafx.h"
#include "Overmind.h"


Overmind::Overmind()
{
}


Overmind::~Overmind()
{
}

void Overmind::getOvermindedInfo() {
	getProgrammerInfo();
	getHumanistInfo();
}

void Overmind::getInfo() {
	Programmer::getInfo();
	Humanist::getInfo();
}

void Overmind::whoAmI() {
	cout << "I am overmind\n";
}