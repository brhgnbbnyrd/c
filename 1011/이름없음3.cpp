#include<stdio.h>


int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	
	printf("정수 %d : %d\n정수 %d : %d\n",a,a,b,b);
	
	
	printf("%d + %d = %d\n",a,b,c);
	printf("%d - %d = %d\n",a,b,d);
	printf("%d * %d = %d\n",a,b,e);
	printf("%d / %d = %d\n",a,b,f);
	
	
	return 0;
}
