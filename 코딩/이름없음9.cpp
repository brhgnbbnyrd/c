#include<stdio.h>
#include<string.h>
#include<time.h>
#include <stdlib.h>

int main(){
	int *ar;
	int len;
	int i;
	printf("배열 ar의 길이를 입력하세요.:");
	scanf("%d", &len);
	
	
	ar = (int*)malloc(sizeof(int)*len);
	
	
	srand(time(NULL));
	for(i=0;i<len;i++)
	{
		*(ar+i) = rand()%100;
	}
	
	for(i=0;i<len;i++)
	{
		printf("%d", ar[i]);
	}
	
	return 0;
}
