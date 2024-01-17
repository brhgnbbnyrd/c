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
		printf("답 \t%d/%d\n",m,n);
		m++;
	}
	m = 1;
	printf("학생 시작");
	for(int i = 0; i<=n; i++)
	{	
		scanf("%d",&Bi[i]);
		printf("답 \t%d/%d\n",m,n);
		m++;
	}
	printf("답 확인\n");
	m = 0;
	for(int i = 0; i<=n; i++)
	{	
		if(Ai[i]==Bi[i])
		{
			m++;
		}
	}	
	printf("학생 정답수 %d/%d", m, n);
	
	
	
	}

