#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int ar[6][6] = {0};
	int br[]= { };
	int i, j, sum, tt, s1, s2;
	scanf("%d", &sum);
	srand(time(NULL));
	for(i = 0; i<6;i++){
		for(j = 0; j<6; j++){
			ar[i][j] = rand()%99+1;
		}
	}
	i =0;
//	sum = ar[0][0];
	tt = 0;
	
	
	while(i<6){
		j = 0;
		while(j<6){
			
//			sum = ar[i][j]+sum;
//			if(ar[i][j]<sum){
//				sum = ar[i][j];
//		
			printf("%3d",ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
//	for(
//		for(
//			if(ar[i][j]==sum){
//			tt++;
//			s1=i;
//			s2=j;
//			}
//		}
//	for(int k=0;k<=tt;k+=2)
//	printf("%d)
//	printf("%d", tt);
return 0;
}
