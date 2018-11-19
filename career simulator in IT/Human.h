#pragma once
#include <string>
using namespace std;
class Human
{
public:
	Human();
	~Human();
	Human(string name, string surname, int age);
	string getName();
	string getSurname();
	int getAge();
private:
	string name, surname;
	int age;
	bool predisposition;
	string rank;
	int experience;
};

