#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#define X_END 79
#define Y_END 24


void GotoXY(int x, int y);
void Move_LeftRight_Key(char chr, int *x, int *y);

int  main()
{
	int x, y = 5;
	for (x = 1; x <80; x+=2)
	{
		system("cls");
		GotoXY(x, y);
		printf("S");
		Sleep(100);
	}
	printf("\n");
}

void GotoXY(int x, int y)
{
	COORD Pos = {x-1, y -1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
