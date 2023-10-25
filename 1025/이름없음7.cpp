#include<stdio.h>



int main()
{
	float a,b,c,d,e;
	printf("실수 하나 내놔");
	scanf("%f, %f, %f, %f, %f",&a,&b,&c,&d,&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
				printf("%f",a);
				}
			}
		}
	}
	else if(b>c)
	{
	if(b>d)
	{
		if(b>e)
		{
			printf("%f",b); 
		}
	}
	}
	else if(c>d)
	{
	if(c>a)
	{
		if(c>b)
		{
			if(c>e)
			{
				printf("%f",c);
			}
		}
	}
		else if(d>e)
	{
	if(d>a)
	{
		if(d>b)
		{
			if(d>c)
			{
				printf("%f",d);
			}
		}
	}
		else if(e>a)
	{
	if(e>b)
	{
		if(e>c)
		{
			if(e>d)
			{
				printf("%f",e);
			}
		}
	}
}
}
}
}


	
	
	

