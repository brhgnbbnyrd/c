#include<stdio.h>
int main(){
	int i, j;
	int arr1[3][4];
	
    arr1[0][0]=10;
	arr1[2][3]=12;
	arr1[0][1]=24;
	arr1[2][0]=36;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%9d", arr1[i][j]);
	}
	printf("\n");
	}
	
	
}
