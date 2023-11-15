#include<stdio.h>

int main()
{
	int a=1;
	int b=0;
	int c=0;
	for(int i=1; i>=1000; i++)
	{
		if(a>=3)
		{	
			b=i*-1;
			c=c-b;
			a=0;
			printf("%d",b);
		}
		else
		{
			a++;
			b=i;
			c=c+b;
			printf("%d",b);
		}
		printf("%d",c);
		
	}
}
