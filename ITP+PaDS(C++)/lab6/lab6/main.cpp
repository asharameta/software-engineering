#include"planeta.h"
#include<Windows.h>
#include <conio.h>
//COORD - zmiana pozycji

void setCursor(int x, int y)
{
	COORD c;
	c.X = x-1;
	c.Y = y-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main()
{
	Plaszczak Anonim;
	Plaszczak Teodor("Teodor",'@');
	cout << Anonim << " " << Teodor << endl;
	Planeta Rect001(30,45,'#',&Teodor);
	//cout << Rect001 << endl;
	/*Rect001.ruchPrawo();
	cout << Rect001 << endl;
	Rect001.ruchDol();
	cout << Rect001 << endl;
	Rect001.ruchLewo();
	cout << Rect001 << endl;*/
	char znak;
	do
	{
		cout << Rect001 << endl;
		znak = _getch();
		switch (znak)
		{
		case 72:Rect001.ruchGora(); break;
		case 75:Rect001.ruchLewo(); break;
		case 80:Rect001.ruchDol(); break;
		case 77:Rect001.ruchPrawo(); break;
		}
		setCursor(1,1);
	} while (znak!=27);
	return 0;
}