#include <stdio.h>

int main(void){
	FILE *tok=fopen("predmeti.txt","r");
	FILE *tok1=fopen("predmeti1.bin","wb");
	FILE *tok2=fopen("predmeti2.bin","wb");
	struct predmet_s{
		int sifra;
		char naziv[41];
		int brStud;
	}predmet;
	predmet.brStud=0;
	while((fscanf(tok,"%d %[^\n]",&predmet.sifra,predmet.naziv))==2){
		fwrite(&predmet,sizeof(predmet),1,tok1);
		fseek(tok2,(long)(predmet.sifra-1001)*(sizeof(predmet)),SEEK_SET);
		fwrite(&predmet,sizeof(predmet),1,tok2);
	}
	fclose(tok);
	fclose(tok1);
	fclose(tok2);
	return 0;
}
	