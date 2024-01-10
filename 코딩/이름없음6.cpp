#include<stdio.h>
struct Circle { 
double r;
double area;
double length;
};

int main(){
	
	struct Circle c;
	c.r=10;
	c.area = c.r * c.r*3.14;
	c.length = 2*3.15*c.r;
	
	
	printf("원의 넓이 %lf\n원의 둘레 %lf", c.area, c.length);
	
	return 0;
}
