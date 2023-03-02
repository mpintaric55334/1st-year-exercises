#include <stdio.h>

int main(void){
	int lista[10];
	int n,i;
	for(i=0;i<10;i++){
		printf("Pisi broj: ");
		scanf("%d",&n);
		lista[i]=n;
	}
	for(i=9;i>-1;i=i-1){
		printf("%d, ",lista[i]);
	}
	return 0;
}