#include<stdio.h>
int main()
{	
	int n,m;
	int a[10]= { };
	int b[10] = { };
	n=0;
	m=0;
	printf("A�� ���� 0~10������ �� 10���� ���ּ���");
	for(int i = 0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("b�� ���� 0~10������ �� 10���� ���ּ���");
	for(int i = 0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}	
	
	for(int i = 0;i<10;i++)
	{
		if(a[i]>b[i])
		{
			n++;
		}
		else if(a[i]<b[i])
		{
			m++;
		}
	}
	if(n>m)
	{
		printf("A");
	}
	else if(n<m)
	{
		printf("B");
	}
	else
	{
	printf("���º�");
	}
}
