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
	h1.fullInfo();
	//smutateHuman(h1);
	h1.fullInfo();

	system("pause");
	return 0;
}