// career simulator in IT.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <string>;
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include "Human.h"

int Human::human_count = 0;

int main()
{
	try {
		try {
			throw 10;
			string("abc").substr(10);
			throw std::exception("Custom error");
		}
		catch (const int& eq) {
			cout << "int: " << eq << endl;
		}
		catch (const std::exception& e) {
			cout << e.what() << endl;
			throw std::exception("Another error");
		}
	}
	catch (const std::exception& ex) {
		cout << ex.what() << endl;
	}



	system("pause");
	return 0;
}