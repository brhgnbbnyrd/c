#include<stdio.h>


int main()
{
	int a, b, c, d, e, f, g;
	scanf("%d",&a);
	b = a/100;
	f = b*100;
	g = a - f;
	c = g/10;
	d = a%10;
	e = b+c+d;
	printf("%d + %d+ %d = %d\n",b,c,d,e);
	e = b*c*d;
	printf("%d * %d * %d = %d",b,c,d,e);
	
	return 0;
}
