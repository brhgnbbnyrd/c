#include<stdio.h>

int main()
{
	int i, j;
	i=6;
	while(i>=1)
	{	
		j=1;
		while(j!=i)
		{
			printf("%2d",j);
			j++;
		}
		printf("\n");
		i--;
		
	}
}
