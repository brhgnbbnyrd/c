#include<stdio.h>

int main()
{
	int a,b,c;
	printf("숫자 입력");
	scanf("%d",&a);
	b=a%2==0;
	if(b)
	{
		printf("와 짝수다"); 
	}
	else
	{
		printf("와 짝수의 반대다!");
	}
}
