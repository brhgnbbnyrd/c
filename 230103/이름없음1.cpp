#include<stdio.h>
int main(){
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int br[7];
	
	
//	printf("�迭�� �̸� : %d\n", &ar[0]);
//	printf("�迭�� �̸� : %d\n", &ar[1]);
//	printf("�迭�� �̸� : %d\n", sizeof(int));
//	printf("�迭�� �̸� : %d\n", sizeof(double));
	printf("%d\n", ar[0]);
	printf("%d\n", ar+0);
	printf("%d\n", &ar[0]); 
	printf("%d\n", *(ar + 0));
	
	
	
	return 0;
}
