// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include "Overmind.h";

int Human::human_count = 0;


int main()
{

	Overmind o("Vasiliy", "Petrov", 20);

	o.getOvermindedInfo();
	o.getInfo();

	system("pause");
	return 0;
}