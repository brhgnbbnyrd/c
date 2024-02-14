#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void GotoXY(int x, int y);
void MyDelay(int d);

int main()
{
	int i;
	int s;
	s=10;
	for(i =20; i<=47; i+=3)
	{
		GotoXY(20+i, 4);
		printf("%d", s);
		Sleep(1000);
		s=s+10;
	} 
	return 0;
}
void GotoXY(int x, int y)
{
		COORD pos = {x,y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
