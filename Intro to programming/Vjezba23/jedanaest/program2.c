#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int n;
	int polje[8];
FILE *tok1=fopen("slucajni.bin","rb");
while((fread(&n,sizeof(n),1,tok1))==1){
	fread(polje,sizeof(int),n,tok1);
	printf("%d ",n);
	for(int i=0;i<n;i++){
		printf("%d ",polje[i]);
	}
	printf("\n");
}
return 0;
}