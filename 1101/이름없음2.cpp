#include<stdio.h>   
                                 




int main()
{	
	int a=1;
	int b=1;
	int i;
	for( i=0; i<10; i++)
	{	
		if(0<i)
		{
			for(a=0; a<i; a++)
			{
				b=b*-1; 
			}
			printf(" %d",b);
			b=1;
		}
		else
		{
		printf("%d", a);
		}
	}
}
