#include <stdio.h>

int main(void){
	int N,i,j,max;
	printf("Upisite broj redaka/stupaca matrice > ");
	scanf("%d",&N);
	printf("Upisite %dx%d clanova >\n",N,N);
	int l[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&l[i][j]);
		}
	}
	max=l[0][0];
	int i_max;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(l[i][j]>max){
				max=l[i][j];
				i_max=i;
			}
		}
	}
	printf("Najveci clan je > %d\n",max);
	printf("Redak (%d):",i_max);
	for(j=0;j<N;j++){
		printf(" %d",l[i_max][j]);
	}
	return 0;
}