#include<stdio.h>
int main(){
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int br[7];
	
	
//	printf("배열의 이름 : %d\n", &ar[0]);
//	printf("배열의 이름 : %d\n", &ar[1]);
//	printf("배열의 이름 : %d\n", sizeof(int));
//	printf("배열의 이름 : %d\n", sizeof(double));
	printf("%d\n", ar[0]);
	printf("%d\n", ar+0);
	printf("%d\n", &ar[0]); 
	printf("%d\n", *(ar + 0));
	
	
	
	return 0;
}
