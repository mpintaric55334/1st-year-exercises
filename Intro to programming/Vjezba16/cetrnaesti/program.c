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
	}
	return NULL;
}
int main(void){
	char niz[21];
	int i;
	printf("Upisite niz: ");
	fgets(niz,21,stdin);
	char *rez;
	rez=prviSamoglasnik(niz);
	if(rez==NULL){
		printf("Nema samoglasnik");
	}else{
		printf("%c",*rez);
	}
	return 0;
	}