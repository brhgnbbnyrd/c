#include<stdio.h>


int main()
{	

	int a, b , c;
	a=6;
	while(a>=1)
	{
		printf("%d ÇÐ³â\t", a);
		c=1;
		while(c<=7)
		{
			printf("%d ¹Ý\t",c);
			c++;
		}
		printf("\n");
		a--;
	}
}
