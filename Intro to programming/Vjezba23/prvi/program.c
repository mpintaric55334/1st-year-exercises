#include <stdio.h>
#include <ctype.h>

int main(void){
	FILE *ulaz,*izlaz;
	ulaz=fopen("C:\\datoteke\\ulaz.txt","r");
	int c;
	while((c=getc(ulaz))!=EOF){
		if(islower(c)){
			c=toupper(c);
		}
		putc(c,stdout);
	}
	fclose(ulaz);
	return 0;
}