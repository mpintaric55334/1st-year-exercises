#include <stdio.h>

int main(void){
	FILE *tok=fopen("predmeti1.bin","rb");
	struct predmet_s{
		int sifra;
		char naziv[41];
		int brStud;
	}predmet;
	while((fread(&predmet,sizeof(predmet),1,tok))==1){
		printf("%d, %s,polozilo je %d\n",predmet.sifra,predmet.naziv,predmet.brStud);
	}
	fclose(tok);
	return 0;
}