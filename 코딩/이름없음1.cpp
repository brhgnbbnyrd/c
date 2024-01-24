#include<stdio.h>
#include<stdlib.h>
//12,20
//30,20,50
//12, 20
int main()
{
	int a, b;
	a =12;
	b =20;
	
	printf("a = %d, b =%d\n", a, b);
	{
		int a,b,c;
		a = 30;
		c = 50;
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		a =90;
		b = 45;
		c = 75;
	}
	
	
	printf("a = %d, b = %d\n", a, b);
	}
