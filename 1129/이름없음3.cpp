#include<stdio.h>




int plus(int num1, int num2){
	return num1+num2;
}
int main(){
	int a = 3;
	int b = 2;
	
	int num1 = plus(a, b);
	printf("%4d",num1);
	
	num1 = plus(3, 5);
	printf("%4d",num1);
	
	num1 = plus(3, 5);
	printf("%4d",num1+10);
	
}
