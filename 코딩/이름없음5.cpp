#include<stdio.h>
int main()
{
	char ch, ca, cr;
	
	
	scanf("%c", &ch);
	printf("ch = %c ch = %c\n",ch,ch);
	scanf("%c%c", &ch,&ca);
	printf("ch = %c ch = %c\n",ch,ch);
	printf("ca = %c ca = %c\n",ca,ca);
	scanf("%c%c%c", &ch,&ca,&cr);
	printf("ch = %c ch = %c\n",ch,ch);
	printf("ca = %c ca = %c\n",ca,ca);
	printf("cr = %c cr = %c\n",cr,cr);
	return 0;
}
