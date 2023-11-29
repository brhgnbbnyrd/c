#include<stdio.h>

int main()
{
	int j;
	for(int i = 5; i>=1;i--)
	{
		for(int k=1;k<=i;k++)
		{
			printf("%d\t", k);
		}
		printf("\n");
	}
}

