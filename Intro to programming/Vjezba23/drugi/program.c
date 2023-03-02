#include <stdio.h>
#include <string.h>
#include <ctype.h>
int brojiSamoglasnike(char *imeDatoteke){
	FILE *tok=fopen(imeDatoteke,"r");
	int br=0;
	int c;
	if(tok!=NULL){
		char niz[1];
		while((c=getc(tok)) != EOF){
			niz[0]=toupper(c);
			if(strpbrk(niz,"AEIOU")!=NULL){
				br+=1;
			}
		}
		return br;
	}else{
		return -1;
	}
}
int main(void){
	char niz[101];
	printf("Upisite path: ");
	scanf("%s",niz);
	int br=brojiSamoglasnike(niz);
	if(br!=-1){
		printf("Datoteka ima %d samoglasnika",br);
	}else{
		printf("Datoteka se ne moze otvoriti");
	}
	return 0;
}
			