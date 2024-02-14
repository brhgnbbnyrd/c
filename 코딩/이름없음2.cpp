#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int x,y;
	COORD pos;
	
	
	do
	{
		pos.X = 0;
		pos.Y = 0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , pos);
		
		
		printf("커서 위치 입력 :");
		scanf("%d %d",&pos.X, &pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , pos);
		printf(".");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , pos);
	}while(pos.X <= 80 && pos.Y <= 24);
	return 0; 
	
}
