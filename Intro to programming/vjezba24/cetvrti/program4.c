#include <stdio.h>

int main(void){
	FILE *tok=fopen("ocjene.txt","r");
	FILE *tok1=fopen("predmeti2.bin","rb");
	struct student_s{
		int broj;
		char ime[21];
		char prezime[21];
		int sifra;
		int ocjena;
	}student;
	struct predmet_s{
		int sifra;
		char naziv[41];
		int brStud;
	}predmet;
	_Bool upisano=0;
	int n;
	printf("Upisite n: ");
	scanf("%d",&n);
	while((fscanf(tok,"%d %s %s %d %d",&student.broj,student.ime,student.prezime,&student.sifra,&student.ocjena))==5){
		if(student.broj==n && upisano==0){
			printf("Student %s %s je polozio/la: \n",student.ime,student.prezime);
			upisano=1;
			fseek(tok1,(student.sifra-1001)*sizeof(predmet),SEEK_SET);
			fread(&predmet,sizeof(predmet),1,tok1);
			if(predmet.sifra != 0){
				printf("%s (%d)\n",predmet.naziv,student.ocjena);
			}else{
				printf("? (%d)\n",student.ocjena);
				
			}
		}else if(student.broj==n){
			fseek(tok1,(student.sifra-1001)*sizeof(predmet),SEEK_SET);
			fread(&predmet,sizeof(predmet),1,tok1);
			if(predmet.sifra != 0){
				printf("%s (%d)\n",predmet.naziv,student.ocjena);
			}else{
				printf("? (%d)\n",student.ocjena);
				
			}
		}
	}
	fclose(tok);
	fclose(tok1);
	return 0;
}
	
	