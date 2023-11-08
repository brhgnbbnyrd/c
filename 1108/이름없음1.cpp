#include<stdio.h>


int main()
{
	int b;


	printf("1~200사이에 정수를 입력하시오");
	scanf("%d",&b);
	for(int a=1 ;a<=b ; a++)
	{
		printf("Hellow World, Judge %d\n",a);
	}
}
