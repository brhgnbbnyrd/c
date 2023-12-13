#include<stdio.h>

int main()
{
	int num [ ] = {5, 2, 6, 7, 8, 9, 4, 3, 1};
	int page[10]= {123, 57, 67, 86};
	int i, j;
	for(int k=0; k<10;k++){
		printf("%3d",num[k]); 
	}
		printf("\n");
		for(int k=0; k<9;k++){
		printf("%3d",page[k]); 
	}
}
