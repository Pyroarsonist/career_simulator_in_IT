// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include "Human.h";
#include "Programmer.h";

int Human::human_count = 0;

void whoAmI(Human *xyz) { xyz->whoAmI(); }

int main()
{

	Programmer p("Vasiliy", "Petrov", 20);

	Human h("Nikolay", "Igorenko", 40);

	h.whoAmI();
	p.whoAmI();
	//whoAmI(&h);
	//whoAmI(&p);
	cout << Human::human_count << endl;


	system("pause");
	return 0;
}