#include<stdio.h>


int main()
{
	int a,b,c;
	c=0;
	printf("얼마나 반복할지");
	scanf("%d",&c);
	
	
	for(int n=1; n<=c; n++)
	{
		printf("자연수 2개");
		scanf("%d %d",&a, &b);
		if(a>b)
		{
		printf("Yes\n");
		}
		else if(a==0&&b==0)
		{
		continue;
		}
		else
		{
		printf("No\n");
		}
		
	}
}
