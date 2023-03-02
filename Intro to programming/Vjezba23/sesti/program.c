#include <stdio.h>
#include <string.h>

int main(void){
	FILE *tok=fopen("osobe.txt","r");
	int mbr;
	char ime[21];
	char prezime[21];
	int godina;
	while(fscanf(tok,"%d %s %s %*d.%*d.%d",&mbr,ime,prezime,&godina)==4){
		if(strstr(ime,"na") !=NULL || godina==1987){
			printf("%d %s %s\n",mbr,ime,prezime);
		}
	}
	return 0;
}