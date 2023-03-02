#include <stdio.h>

int odrediIndNajVClana (int *frekvencije, int n){
	int i=0;
	int najveci=0;
	for(i=0;i<n;i++){
		if(*(frekvencije+i)>*(frekvencije+najveci)){
			najveci=i;
		}
	}
	return najveci;
}
int odrediFrek (int *matrica, int m, int n, int *frekvencije){
	int i,j;
	for(i=0;i<9;i++){
		*(frekvencije+i)=0;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(frekvencije + *(matrica+n*i+j))+=1;
		}
	}
	int indeks=odrediIndNajVClana (frekvencije, 9);
	return *(frekvencije+indeks);
}



int main(void){
	int l[4][3]={1,5,5,6,2,2,5,0,2,2,5,8};
	int m[9]={0};
	printf("%d",odrediFrek(&l[0][0],3,4,&m[0]));
	return 0;
}