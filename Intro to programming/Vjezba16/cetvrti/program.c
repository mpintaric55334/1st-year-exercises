#include <stdio.h>

void TransponKvad(int *p,int m){
	int i,j,pom;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(j>i){
				pom= *(p+m*i+j);
				*(p+m*i+j)= *(p+m*j+i);
				*(p+m*j+i) = pom;
			}
		}
	}
}

int main(void){
	int m,i,j;
	printf("Upisite red matrice: ");
	scanf("%d",&m);
	int matrica[m][m];
	printf("Upisite clanove matrice: \n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&matrica[i][j]);
		}
	}
	TransponKvad(&matrica[0][0],m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%5d",matrica[i][j]);
		}
		printf("\n");
	}
	return 0;
}