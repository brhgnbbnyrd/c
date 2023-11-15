#include<stdio.h>


int main()
{
	int a, b, c;
	printf("자연수 3개");
	scanf("%d %d %d", &a,&b,&c);
	if(a%b==0==a%c)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
