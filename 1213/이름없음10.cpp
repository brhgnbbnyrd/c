#include<stdio.h>
int main()
{	
	char ch1[10];
	scanf("%s",&ch1);
	for(int i=0; i<=10; i++)
	{
		ch1[i]-=32;
		if(ch1[i]==-32)
		{
		break;
		}
		printf("%c",ch1[i]);
		
	}
}

