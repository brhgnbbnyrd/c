#include<stdio.h>

void Ccube();
void Coding();

int main()
{
	Ccube();
	Ccube();
	Ccube();
	Coding();
	Coding();
	Coding();
}

void Ccube()
{
	int cut = 0;
	
	cut++;
	printf("%d ¾¾Å¥ºê\n", cut);
}
void Coding()
{
	static int cnt = 0;
	
	cnt++;
	printf("%d ÄÚµù\n", cnt);
}
