#include<stdio.h>




int main()
{
	int a;
	printf("���� �Ѱ�");
	scanf("%d", &a);
	
	
	
	if(a%2==0)
	{
		if(a%3==0)
		{
			printf("����� �Դϴ�.\n");	
		}
	else
	{
		printf("������� �ƴմϴ�.\n");
	}
	}
	else
	{
		printf("������� �ƴմϴ�.\n");
	}
	if(12%a==0&&30%a==0)
	{
		printf("����� �Դϴ�.\n");
	}
	else 
	{
		printf("������� �ƴմϴ�.");
	} 
	 
}
