#include <iostream>
using namespace std;
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RTGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define VERTICAL_LINE (char)179
#define HORIZONTAL_LINE  "\xC4\xC4"               //(char)196 << (char)196
#define WHITE_BOX       "\xDB\xDB"                //(char)219 << (char)219
#define BLAK_BOX         "\x20\x20"             //(char)32 << (char)32

void main()
{
	setlocale(LC_ALL, "Russian");
	
	/*for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << "\n";
	}*/
	int n;
	cout << "������� ������ �����:"; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RTGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			//else  (i % 2 == j % 2) ? cout << WHITE_BOX : cout << BLAK_BOX;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLAK_BOX);


		}
		cout << endl;
	}

		
	
}


