#include<iostream>
using namespace std;

void main()
{
	int n;
	cout << "Введите количество итераций:"; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;

}