// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include "Human.h";


bool is_number(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}
bool without_number(const string& s)
{
	string::const_iterator it = s.begin();
	while (it != s.end() && !isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

int main()
{
	string name, surname, age_s;
	int age;
	cout << "Enter your name:\n";
	cin >> name;
	system("cls");
	if (!without_number(name)) {
		cout << "Name is invalid\n";
		name = "";
	}
	cout << "Enter your surname:\n";
	cin >> surname;
	system("cls");
	if (!without_number(name)) {
		cout << "Name is invalid\n";
		surname = "";
	}
	cout << "Enter your age:\n";
	cin >> age_s;
	system("cls");
	if (is_number(age_s)) {
		age = stoi(age_s);
	}
	else {
		age = -1; cout << "Age is invalid\n";
	}

	Human h(name, surname, age);
	Human hSet;
	hSet.getTime();
	hSet.setName(name);
	cout << "Has surname: " << hSet.hasSurname() << endl;
	hSet.setSurname(surname);
	cout << "Has surname: " << hSet.hasSurname() << endl;
	hSet.setAge(age);
	h.sayWord();
	cout << "[Constructor] You are " << h.getName() << " " << h.getSurname() << ", aged " << h.getAge() << endl;
	cout << "[Setters] You are " << hSet.getName() << " " << hSet.getSurname() << ", aged " << hSet.getAge() << endl;
	cout << endl;
	system("pause");
	return 0;
}