#include <stdio.h>

char *prviSamoglasnik(char *niz){
	_Bool pronaden=0;
	char *rez=NULL;
	int i=0;
	while(*(niz+i) != '\0'){
		if(*(niz+i)=='a' || *(niz+i)=='e' || *(niz+i)=='i' || *(niz+i)=='o' || *(niz+i)=='u' || *(niz+i)=='A' || *(niz+i)=='E' || *(niz+i)=='I' || *(niz+i)=='O' || *(niz+i)=='U'){
			rez=niz+i;
			return rez;
		}
		i+=1;
		if(*(niz+i)=='\0'){
			return NULL;
		}
	}
	return NULL;
}
int main(void){
	char niz[21];
	printf("Upisi niz: ");
	fgets(niz,21,stdin);
	char *rez=niz;
	while(rez != NULL){
		rez=prviSamoglasnik(rez+1);
		printf("%c",*rez);
	}
	return 0;
}
	