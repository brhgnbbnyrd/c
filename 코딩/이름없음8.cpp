#include<stdio.h>
#include <stdlib.h>

int main()
{
	double *d;
	char *ch;
	d = (double*)malloc(sizeof(double));
	ch = (char*)malloc(sizeof(char));
	
	*d = 3.1415912;
	*ch = 'A';
	printf("%lf %c", *d, *ch);
	
	free(d);
	free(ch);
	return 0;
}
