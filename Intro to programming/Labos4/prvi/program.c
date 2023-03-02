#include <stdio.h>

int main(void){
	int n,i,j,suma=0;
	printf("Upisite dimenziju matrice > ");
	scanf("%d",&n);
	int l[n][n];
	printf("Upisite elemente matrice > ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&l[i][j]);
		}
	}
	int l2[n+1][n];
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			l2[i][j]=l[i][j];
			suma+=l[i][j];
		}
		if(suma%2==0){
			l2[n][j]=0;
		}else if(suma%2!=0){
			l2[n][j]=1;
		}
		suma=0;
	}
	printf("Nova matrica:\n");
	for(i=0;i<n+1;i++){
		for(j=0;j<n;j++){
			printf("%d ",l2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
		