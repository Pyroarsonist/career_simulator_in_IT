#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
class Human
{
	const string favourite_university;

public:
	static int human_count;
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
	//friend void mutateHuman(Human h);
	void operator +(int diff_age);
	virtual void whoAmI() = 0;
private:
	void updateTime();
	string name, surname;
	int age;
	bool predisposition;
	string rank;
	int experience;
	string updated_at;
};

