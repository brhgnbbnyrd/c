#include<stdio.h>
#define MAX 10
#define PI 3.141592
#define C3C "��ť���ڵ�"
#define MACRO "## ��ũ�� ���##\n"
#define PRN printf
#define SUM(n,m) ((n)+(m))
#define SUB(s,b) ((s)-(b))

int main()
{
	PRN(MACRO);
	PRN("MAX = %d\n", MAX);
	PRN("PI = %1f\n", PI);
	PRN("C3C = %s\n", C3C);
	PRN("%d\n", SUM(3,8));
	PRN("%d\n", SUM(3.6,8.34));
	PRN("%d\n", SUB(13,5));
	PRN("%d\n", SUB(4.2,3.4));
	return 0;
} 
