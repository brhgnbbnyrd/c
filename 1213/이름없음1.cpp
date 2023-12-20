#include<stdio.h>


int main()
{
	int x; // 정수형 변수 X 선언 
	int* ptr; // 포인터 변수 ptr 선언 
	
	
	x = 10;
	ptr = &x;//변수 ptr에 x의 주소값 저장 
	
	printf("%d\n",x);
	printf("%d",*ptr);
	
	return 0;
}
