#include<stdio.h>

int main()
{
	int i, j;
	i=1;
	while(i<=6)
	{	
		j=1;
		while(j!=i)
		{
			printf("%2d",j);
			j++;
		}
		printf("\n");
		i++;
		
	}
}
