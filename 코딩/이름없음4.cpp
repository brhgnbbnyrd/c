#include<stdio.h>

int main()
{	
	int i;
	for(int j=5;j>=1; j--)
	{	
		i=j;
		while(i>=1)
		{
			printf("%3d",i);
			i--;
		}
	printf("\n"); 
	}
}
