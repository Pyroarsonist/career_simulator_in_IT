// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include "Human.h";

int Human::human_count = 0;

int main()
{

	Human h1("Vasiliy", "Petrov", 20);
	mutateHuman(h1);
	cout << "[AFTER MUTATE] Name: " << h1.getName() << " ,surname: " << h1.getSurname() << " ,age: " << h1.getAge() << endl;
	Human h2("Petrov", "Vasya", 32);
	cout << "[BEFORE OVERLOAD] Name: " << h2.getName() << " ,surname: " << h2.getSurname() << " ,age: " << h2.getAge() << endl;
	h2+3;
	cout << "[AFTER OVERLOAD] Name: " << h2.getName() << " ,surname: " << h2.getSurname() << " ,age: " << h2.getAge() << endl;


	system("pause");
	return 0;
}