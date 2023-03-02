#include <stdio.h>
#include <string.h>
int main(void){
	FILE *tok=fopen("filmovi.txt","r");
	FILE *tok1=fopen("drama.txt","w");
	FILE *tok2=fopen("SF.txt","w");
	FILE *tok3=fopen("komedija.txt","w");
	char film[61];
	char naziv[15];
	int godina;
	while(fscanf(tok,"%[^|]|%[^|]|%d",film,naziv,&godina)==3){
		if(strstr(naziv,"drama") != NULL){
			printf("%s",film);
			fprintf(tok1,"%s %d",film,godina);
		}else if(strstr(naziv,"komedija") != NULL){
			fprintf(tok3,"%s %d",film,godina);
		}else if(strstr(naziv,"SF") != NULL){
			fprintf(tok2,"%s %d",film,godina);
		}
	}
	fclose(tok);
	fclose(tok1);
	fclose(tok2);
	fclose(tok3);
	return 0;
}