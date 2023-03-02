#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand((unsigned int)time(NULL));
	FILE *tok=fopen("slucajni.bin","wb");
	int n;
	int polje[8];
	for(int i=0;i<50;i++){
		n=rand()%(8-2+1)+2;
		for(int j=0;j<n;j++){
			polje[j]=rand()%(160-150+1)+150;
		}
		fwrite(&n,sizeof(n),1,tok);
		fwrite(polje,sizeof(int),n,tok);
	}
	fclose(tok);
	return 0;
	
}