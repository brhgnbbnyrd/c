#include<stdio.h>


int main()
{
	int x; // ������ ���� X ���� 
	int* ptr; // ������ ���� ptr ���� 
	
	
	x = 10;
	ptr = &x;//���� ptr�� x�� �ּҰ� ���� 
	
	printf("%d\n",x);
	printf("%d",*ptr);
	
	return 0;
}
