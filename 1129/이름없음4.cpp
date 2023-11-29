#include<stdio.h>
int Sum(int n)
{
	int j=0;
	for(int i=1;i<=n;i++ )
	{
		j=j+i;
	}return j;
}


int Divisor(int n)
{
	int j=1;
	for(int i=1;i<=n;i++ )
	{
		if(n%i==0)
		{
			printf("%5d",i);
		}
	}
}


int Re(int n)
{
	int l = 0;
	while (n>0)
	{
		l = l * 10 + n%10;
		n=n/10;
	}
	return l;
}




int main(){
	int j;
	j=Sum(50);
	printf("%d",j);
	
	
	
	int p;
	p=0;
	p=Divisor(50);
	
	
	
	
	int l;
	l=0;
	l=Re(12345678987654321);
	printf("%d",l);	
}
