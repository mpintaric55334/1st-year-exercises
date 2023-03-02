#include <stdio.h>

double zbroj2D(double *p, int m, int n){
	int i,j;
	double suma=0;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			suma+=*(p+4*i+j);
		}
	}
	return suma;
}

int main(void){
	int m,n;
	printf("Upisite dimenzije: ");
	scanf("%d %d",&m,&n);
	double matrica[m][n];
	printf("Upisite clanove: ");
	int i,j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%lf",&matrica[i][j]);
		}
	}
	printf("Suma je %lf",zbroj2D(&matrica[0][0],m,n));
	return 0;
}
		
	