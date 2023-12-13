#include<stdio.h>


int main()
{
	char ch1;
	
	scanf("%c", &ch1);
	if(ch1<=96)
	{
		printf("%c ", ch1 + 32);
	}	
	else
	{
		printf("%c ", ch1 - 32);
	}
	
}
