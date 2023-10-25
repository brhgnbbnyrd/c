#include<stdio.h>

int main()
{
	int a,b,c,d,e; 
	
	c=1;
	printf("정수 2개 내놔");
	scanf("%d %d",&a,&b);
	c==a>b;
	if(c)
	{
		d = a%b;
		if(d>0)
		{
			printf("%d만큼 남았습니다 ",d);
		}
		else
		{
			printf("%d는 %d의 배수입니다",a,b);	
		}
	
	}
	else
	{
	e = b%a;
	
	if(e>0)
	{
		printf("%d만큼 남았습니다 ",e);	
	}
	else
	{
		printf("%d는 %d의 배수입니다",b,a);	
	}
	}
}
 
