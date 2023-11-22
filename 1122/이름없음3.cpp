#include<stdio.h>


int main()
{
	int i, j, k;
	i=1;
	do
	{	
		printf("%dÇÐ³â   ",i);
		i++;
		j = 7;
		do
		{
			printf("%d¹Ý  ", j);
			j--;
		}while(j>=1);
		printf("\n");
	} while(i<=6);
	
	
}
