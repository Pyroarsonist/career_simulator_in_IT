// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include "Human.h";

int Human::human_count = 0;

inline void Human::fullInfo() 
{
	cout << name << " " << surname << ", " << age << " old\n" << "Human count: " << human_count << endl;
	cout << "Favourite university: " << favourite_university << endl;
}


int main()
{

	Human h1("Vasiliy", "Petrov", 20);
	h1.fullInfo();
	Human h2("Petrov", "Vasilyev", 30);
	h2.fullInfo();
	Human h3;
	h3.fullInfo();

	system("pause");
	return 0;
}