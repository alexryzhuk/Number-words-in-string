// Number words in string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a;
	int n = 0;
	getline(cin, a);//введення рядка
	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		if (a[i] == ' ')//пошук пробілів в рядку
		{
			n++;//підрахунок кількості пробілів
		}
	}
	cout <<"Кількість слів у реченні дорівнює - "<< n+1;//виведення кількості слів у реченні
}
