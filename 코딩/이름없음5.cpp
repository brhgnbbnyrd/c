#include<stdio.h>
int main()
{	
	int i, k, j, m;
	scanf("%d %d %d", &k, &j, &m);
	j = j+m;
	if(j>=60)
	{
	k=k+(j/60);
	j = j%60;
	}
	else if(k>=24);
	{
		k = k%24;
	}
	printf("%d %d", k, j);
	return 0;
}
