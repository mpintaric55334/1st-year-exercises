#include <stdio.h>

void stvoriObrnutiniz(char *niz, char *niz1){
	int duljina=0;
	while(*niz != '\0'){
		duljina+=1;
		niz++;
	}
	niz-=duljina;
	int i=0;
	int j=duljina-1;
	for(i=0;i<duljina;i++){
		niz1[i]=niz[j];
		j-=1;
	}		
	niz1[duljina]='\0';
}
int main(void){
	char niz[21],niz1[21];
	printf("Upisi niz: ");
	fgets(niz,21,stdin);
	stvoriObrnutiniz(niz,niz1);
	printf("%s",niz1);
	return 0;
}