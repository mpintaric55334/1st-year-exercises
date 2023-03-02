#include <stdio.h>

int main(void){
	int n,i,j;
	printf("Upisite cijeli broj: ");
	scanf("%d",&n);
	if(n>=1 && n<=10){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j==i){
					printf("1");
				}else{
					printf("0");
				}
				if(j<n-1){
					printf(" ");
				}
			}
			printf("\n");
		}
		
	}else{
		printf("Krivi red matrice");
	}
	return 0;
}