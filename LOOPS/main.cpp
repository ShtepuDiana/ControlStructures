#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE1
//#define WHILE2
//#define DOWHILE
void main()
{
	setlocale(LC_ALL, "");
#if defined WHILE1
	int i = 0;
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	while (i < n)
	{
		cout << ++i << "Hello\n";
		
	}
#endif
#if defined WHILE2
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	while (--n)
	{
		cout << n << "\t";

	}
	cout << endl;
	cout << n << endl;
#endif
#if defined DOWHILE
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;



	} while (key != 27);

#endif
}
