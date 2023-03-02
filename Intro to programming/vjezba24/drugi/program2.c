#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	FILE *tok=fopen("slova.bin","rb");
	static _Bool pronaden=0;
	if(!pronaden){
		srand((unsigned int)time(NULL));
		pronaden=1;
	}
	int poz=0;
	int i=0;
	char c=0;
	while(i<40 &&  c!='X'){
		poz=rand()%(32+32+10-0+1)+0;
		fseek(tok,poz,SEEK_SET);
		fread(&c,sizeof(char),1,tok);
		if(c=='X'){
			break;
		}else{
			printf("%c\n",c);
		}
		i++;
	}
	fclose(tok);
	return 0;
}