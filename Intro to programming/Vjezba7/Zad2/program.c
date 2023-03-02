#include <stdio.h>

int main(void){
	int lista[10];
	int n,i;
	for(i=0;i<10;i++){
		printf("Pisi broj: ");
		scanf("%d",&n);
		lista[i]=n;
	}
	for(i=0;i<5;i++){
		n=lista[9-i];
		lista[9-i]=lista[i];
		lista[i]=n;
	}
	for(i=0;i<10;i++){
		printf("%d ",lista[i]);
	}
	return 0;
}
	