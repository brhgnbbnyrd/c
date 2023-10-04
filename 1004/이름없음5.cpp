#include<stdio.h>


int main()
{
	int tt;
	int E;
	int x;
	int a;
	
	scanf("%d",&tt);
	a = tt/10;
	E = tt%10;
	x = a+E;
	printf("%d + %d = %d",a,E,x);
	return 0;
} 
