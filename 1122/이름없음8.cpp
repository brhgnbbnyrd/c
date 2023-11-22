#include<stdio.h>


int main()
{
	int i, j, sum;
	sum=0;
	for(i=1; i<=10;i++)
	{	
	j = 1;
	
		while(j<=i)
		{	
			sum=sum+j;
			printf("%8d",sum);	
			j=j+1;
			
		}
	}
	printf("%d", sum);
}
