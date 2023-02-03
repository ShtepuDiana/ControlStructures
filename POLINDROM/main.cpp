#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Hello Palindrome" << endl;
	int number;
	int reverse = 0;
	cout << "Введите число:"; cin >> number;
	int copy = number;
	while (copy)
	{
		reverse *= 10;
		reverse += copy % 10;
		copy /= 10;
	}
	if (reverse == number)
	{
		cout << "Полиндром!" << endl;
	}
	else
	{
		cout << "Не полиндром!" << endl;
	}
	cout << number << endl;
	cout << reverse << endl;


}