#include<stdio.h>
int main()
{
	int Ai[] = { };
	int Bi[] = { };
	int n,m,k;
	m = 0;
	scanf("%d", &n);
	for(int i = 0; i<=n; i++)
	{	
		scanf("%d",&Ai[i]);
		printf("�� \t%d/%d\n",m,n);
		m++;
	}
	m = 1;
	printf("�л� ����");
	for(int i = 0; i<=n; i++)
	{	
		scanf("%d",&Bi[i]);
		printf("�� \t%d/%d\n",m,n);
		m++;
	}
	printf("�� Ȯ��\n");
	m = 0;
	for(int i = 0; i<=n; i++)
	{	
		if(Ai[i]==Bi[i])
		{
			m++;
		}
	}	
	printf("�л� ����� %d/%d", m, n);
	
	
	
	}

