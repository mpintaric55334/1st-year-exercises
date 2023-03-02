#include <stdio.h>

void Funkcija(char *p,int n,int x,int y){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i<x && j<y)||(i>x && j>y)){
				*(p+n*i+j)='#';
			}else if(i==x && j==y){
				*(p+n*i+j)='X';
			}else{
				*(p+n*i+j)='-';
			}
		}
	}
}

int main(void){
	int n,x,y;
	printf("Upisi dimenziju, redak i stupac: ");
	scanf("%d %d %d",&n,&x,&y);
	char polje[n][n];
	Funkcija(&polje[0][0],n,x,y);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%c ",polje[i][j]);
		}
		printf("\n");
	}
	return 0;
}
			