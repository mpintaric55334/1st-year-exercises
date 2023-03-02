#include <stdio.h>

int main(void){
	FILE *tok=fopen("bodovi.txt","r");
	char jmbag[11];
	char ime[21];
	char prezime[21];
	float bod;
	float prosjek=0.f;
	int n=0;
	while((fscanf(tok,"%*s %*s %*s %f",&bod))==1){
		prosjek+=bod;
		n++;
	}
	prosjek=prosjek/n;
	fseek(tok,0L,SEEK_SET);
	while((fscanf(tok,"%s %s %s %f",jmbag,ime,prezime,&bod))==4){
		if(bod>prosjek){
			printf("%s %s %s %f\n",jmbag,ime,prezime,bod);
		}
	}
	fclose(tok);
	return 0;
}