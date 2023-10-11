#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	
	scanf("%d",&a);
	b=a/100;
	c=(a-b*100)/10;
	d=(a-b*100-c*10)/1;
	e=b+c+d;
	printf("%d + %d + %d = %d",b,c,d,e);
	return 0;
}
