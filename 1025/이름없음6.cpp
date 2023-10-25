#include<stdio.h>

int main()
{
	float a,b,c;
	printf("실수 하나 내놔");
	scanf("%f",&a);
	if(a>0)
	{
	printf("%f",a);
	}
	else
	{
	a=a*-1;
	printf("%f",a);
	}
}
