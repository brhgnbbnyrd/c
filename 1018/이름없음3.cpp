#include<stdio.h>


int main()
{
	int a = 10;
	int b = 20;
	int c = ++a + b++;
	
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
}
