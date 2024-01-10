#include<stdio.h>
struct Circle {
	int x;
	int y;
	double r;
};

int main()
	{
	struct Circle c1, c3, c4;
	c1.x =3;
	c1.y =4;
	c1.r =7;struct Circle c2 = {-5, -10, 3};
	c4.x = c2.y;
	c4.y = c2.x;
	c4.r = c2.r;
	printf("c1ÀÇ ÁÂÇ¥(%d,%d,%.0f)\n", c1.x, c1.y, c1.r);
	printf("c2ÀÇ ÁÂÇ¥(%d,%d,%.0f)\n", c2.x, c2.y, c2.r);
	printf("c2ÀÇ ÁÂÇ¥(%d,%d,%.0f)\n", c4.x, c4.y, c4.r);
	
	return 0;
}
	
