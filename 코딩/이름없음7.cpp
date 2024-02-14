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
	i = 0;
	while(i<=9)
	{
		GotoXY(40, i);
		printf("%d", s);
		i++;
		s=s+10;
		Sleep(1000);
		 
		
	} 
	return 0;
}
void GotoXY(int x, int y)
{
		COORD pos = {x,y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
