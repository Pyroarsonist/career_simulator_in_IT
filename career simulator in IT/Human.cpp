#include "stdafx.h"
#include "Human.h"


Human::Human()
{
}



Human::~Human()
{
}


Human::Human(string _name, string _surname, int _age): name(_name) , surname(_surname), age(_age)
{
	predisposition = false;
}

string Human::getName() { return name; }
string Human::getSurname() { return surname; }
int Human::getAge() { return age; }

void Human::setName(string _name) { name = _name; }
void Human::setSurname(string _surname) { surname = _surname; }
void Human::setAge(int _age) { age = _age; }