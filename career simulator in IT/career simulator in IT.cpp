// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
using namespace std;

#include "Human.h";

int main()
{
	string name, surname;
	int age;
	cout << "Enter your name:\n";
	cin >> name;
	system("cls");
	cout << "Enter your surname:\n";
	cin >> surname;
	system("cls");
	cout << "Enter your age:\n";
	cin >> age;
	system("cls");
	Human h(name, surname, age);
	Human hSet;
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