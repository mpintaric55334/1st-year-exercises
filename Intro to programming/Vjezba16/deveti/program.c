#include <stdio.h>

int *prviNegativac(int *p,int n){
	int *rez;
	int i=0, pronaden=0;
	while( pronaden == 0){
		if( *(p+i) < 0){
			rez = p+i;
			pronaden=1;
		}
		i+=1;
	}
	return rez;
}

int main(void){
	int n,i, *rez=NULL;
	printf("Upisite broj clanova: ");
	scanf("%d", &n);
	int l[n];
	printf("Upisite clanove: ");
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
	}
	rez= prviNegativac(&l[0],n);
	printf("Prvi negativac je %d ",*rez);
}