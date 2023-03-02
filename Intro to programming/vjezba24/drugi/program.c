#include <stdio.h>

int main(void){
	FILE *tok=fopen("slova.bin","wb");
	char c;
	for(int i='A';i<='Z';i++){
		c=i;
		fwrite(&c,sizeof(char),1,tok);
	}
	for(int i='a';i<='z';i++){
		c=i;
		fwrite(&c,sizeof(char),1,tok);
	}
	for(int i='0';i<='9';i++){
		c=i;
		fwrite(&c,sizeof(char),1,tok);
	}
	fclose(tok);
	return 0;
	

}