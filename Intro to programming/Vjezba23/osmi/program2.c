#include <stdio.h>

int main(void){
	FILE *tok=fopen("fibonacci.bin","rb");
	int n;
	int br=0;
	printf("Upisi n: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		fread(&br,sizeof(br),1,tok);
		printf("%d\n",br);
	}
	return 0;
}