#include <stdio.h>
#include <string.h>

int MyStrlen(const char *s){
	int duljina=0;
	while(*s != '\0'){
		++s;
		++duljina;
	}
	return duljina;
}
int main(void){
	char niz[21];
	printf("Pis niz: ");
	fgets(niz,21,stdin);
	int a=MyStrlen(niz);
	printf("%d",a);
}
	