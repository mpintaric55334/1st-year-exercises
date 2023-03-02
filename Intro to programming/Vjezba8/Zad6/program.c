#include <stdio.h>

int main(void){
	int m,n,i,j;
	while(1){
		printf("Pisi broj m: ");
		scanf("%d",&m);
		if(m>=4 && m<=8){
			break;
		}
	}
	while(1){
		printf("Pisi broj n: ");
		scanf("%d",&n);
		if(n>=5 && n<=10){
			break;
		}
	}
	int l[m][n];
	printf("Upisite %d i %d clanova: ",m,n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("pisi: ");
			scanf("%d",&l[i][j]);
		}
	}
	int suma=0;
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			suma+=l[i][j];
		}
		printf("%5d",suma);
		suma=0;
	}
	return 0;
}