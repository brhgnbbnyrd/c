#include<stdio.h>

int main()
{
	int i, j, k;
	k = 1;
	j = 0;
	for(i = 5; i>=1 ; i--)
	{	
		for ( j = 1; j<= i; j++)
		{
			printf("  ");
		}
		for(j = 6-i; j>= 1; j--){
			printf(" %d", j);
		}
		printf ("\n");
	}
}
