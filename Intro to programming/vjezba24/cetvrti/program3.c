#include <stdio.h>
int main(void){
	FILE *tok=fopen("predmeti2.bin","rb");
	struct predmet_s{
		int sifra;
		char naziv[41];
		int brStud;
	}predmet;
	while((fread(&predmet,sizeof(predmet),1,tok))==1){
		if(predmet.sifra != 0){
			printf("%d, %s,polozilo je %d\n",predmet.sifra,predmet.naziv,predmet.brStud);
		}
	}
	fclose(tok);
	return 0;
}
	