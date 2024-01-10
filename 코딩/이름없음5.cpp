#include<stdio.h>
#include<string.h>
struct Address{
	char name[10];
	char phon[20];
	char home[50];
};


int main(){
	struct Address m1;
	struct Address m2;
	strcpy(m1.name, "¿¡¿¨¿¨");
	strcpy(m1.phon, "010-4944-0219");
	strcpy(m1.home, "Earth");
	printf("%s %s %s", m1.name, m1.phon, m1.home);
	return 0;
}
	
