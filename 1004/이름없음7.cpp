#include<stdio.h>


int main()
{	
	int a,b,c,d,e,f,g,h,i,j,k,l,n;
	
	
	
	
	printf("00000~99999�� �ټ��ڸ� ���� �Է����ּ���");
	scanf("%d",&a);
	b=a/10000;
	g=b*10000;
	h=a-g;
	c=h/1000;
	i=a/1000*1000;
	l=a-i;
	d=l/100;
	j=a/100*100;
	n=a-j;
	e=n/10;
	k=a/10*10;
	f=a%10;
	printf("%d %d %d %d %d",b,c,d,e,f); 
	return 0;
	
	
}
