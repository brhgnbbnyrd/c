#include<stdio.h>
int main()
{
	int Ai[100] = { };
	int Bi[10013] = { };
	int n,m,k;
	m = 0;
	scanf("%d", &n);
	for(int i = 0; i<n; i++)
	{	
		scanf("%d",&Ai[i]);
	}
	printf("학생 시작\n");
	for(int i = 0; i<n; i++)
	{	
		scanf("%d",&Bi[i]);
		printf("답 \t%d/%d\n",m,n);
		m++;
	}
	printf("답 확인\n");
	k = 0;
	for(int i = 0; i<n; i++)
	{
		if(Ai[i] == Bi[i])
		{
			k=k+1;
			printf("%d\n", k);
		}
	}	
	printf("학생 정답수 %d", k);
	
	
	
	}

