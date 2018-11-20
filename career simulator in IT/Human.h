#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <chrono>

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
	void setName(string _name);
	void setSurname(string _surname);
	void setAge(int _age);
	bool hasSurname();
	void sayWord();
	void getTime();
private:
	void updateTime();
	string name, surname;
	int age;
	bool predisposition;
	string rank;
	int experience;
	string updated_at;
};

