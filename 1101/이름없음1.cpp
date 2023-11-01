#include<stdio.h>




int main()
{
	int a;
	printf("정수 한개");
	scanf("%d", &a);
	
	
	
	if(a%2==0)
	{
		if(a%3==0)
		{
			printf("공배수 입니다.\n");	
		}
	else
	{
		printf("공배수가 아닙니다.\n");
	}
	}
	else
	{
		printf("공배수가 아닙니다.\n");
	}
	if(12%a==0&&30%a==0)
	{
		printf("공약수 입니다.\n");
	}
	else 
	{
		printf("공약수가 아닙니다.");
	} 
	 
}
