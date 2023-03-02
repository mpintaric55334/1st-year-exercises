#include <stdio.h>

int main(void){
	int m,n,i,j,k,d;
	printf("Pisi m i n: ");
	scanf("%d %d",&m,&n);
	int l[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Pisi: ");
			scanf("%d",&l[i][j]);
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			for(k=0;k<m;k++){
				if(l[i][j]<l[k][j]){
					d=l[i][j];
					l[i][j]=l[k][j];
					l[k][j]=d;
				}
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",l[i][j]);
		}
		printf("\n");
	}
	return 0;
}