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
	Human h(name,surname,age);
	cout << "You are " << h.getName()<< " " << h.getSurname() << ", aged " << h.getAge() << endl;
	cout << endl;
	system("pause");
	return 0;
}

