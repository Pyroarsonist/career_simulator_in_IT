#include "stdafx.h"
#include "Human.h"



Human::Human()
{
	updateTime();
}



Human::~Human()
{
}


Human::Human(string _name, string _surname, int _age) : name(_name), surname(_surname), age(_age)
{
	updateTime();
	predisposition = false;
}

string Human::getName() { return name; }
string Human::getSurname() { return surname; }
int Human::getAge() { return age; }

void Human::setName(string _name) { updateTime(); name = _name; }
void Human::setSurname(string _surname) { updateTime(); surname = _surname; }
void Human::setAge(int _age) { updateTime(); age = _age; }
bool Human::hasSurname() { return !surname.empty(); }
void Human::sayWord() { cout << "Word" << endl; }
void Human::getTime() {
	cout << updated_at << endl;
}
void Human::updateTime() {
	time_t now;
	struct tm nowLocal;
	now = time(NULL);
	nowLocal = *localtime(&now);
	updated_at = to_string(nowLocal.tm_mday) + "/" + to_string(nowLocal.tm_mon + 1) + "/" + to_string(nowLocal.tm_year + 1900) + " " + to_string(nowLocal.tm_hour) + ":" + to_string(nowLocal.tm_min) + ":" + to_string(nowLocal.tm_sec);
}