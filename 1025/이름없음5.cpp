#include<stdio.h>

int main()
{
	int a,b,c,d,e; 
	
	c=1;
	printf("���� 2�� ����");
	scanf("%d %d",&a,&b);
	c==a>b;
	if(c)
	{
		d = a%b;
		if(d>0)
		{
			printf("%d��ŭ ���ҽ��ϴ� ",d);
		}
		else
		{
			printf("%d�� %d�� ����Դϴ�",a,b);	
		}
	
	}
	else
	{
	e = b%a;
	
	if(e>0)
	{
		printf("%d��ŭ ���ҽ��ϴ� ",e);	
	}
	else
	{
		printf("%d�� %d�� ����Դϴ�",b,a);	
	}
	}
}
 
