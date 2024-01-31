#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	int p[50];
	scanf("%d %d",&a,&b);
	c = 1;
	d = 0;
	b=b-1;
	while(b==c)
	{
		if(a%c==0)
		{
			p[d]=c;
			d++;
		}
		c++;
	}
	printf("%d",p[b]);
	return 0;
	
}
