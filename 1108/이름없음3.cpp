#include<stdio.h>


int main()
{
	int a,b,c;
	c=0;
	printf("�󸶳� �ݺ�����");
	scanf("%d",&c);
	
	
	for(int n=1; n<=c; n++)
	{
		printf("�ڿ��� 2��");
		scanf("%d %d",&a, &b);
		if(a>b)
		{
		printf("Yes\n");
		}
		else if(a==0&&b==0)
		{
		continue;
		}
		else
		{
		printf("No\n");
		}
		
	}
}
