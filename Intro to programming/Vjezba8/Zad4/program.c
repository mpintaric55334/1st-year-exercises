#include <stdio.h>

int main(void){
	int m,n,d,k,i,j;
	printf("Upisi m i n: ");
	scanf("%d %d",&m,&n);
	int l[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Pisi: ");
			scanf("%d",&l[i][j]);
		}
	}
	for(j=0;j<n;j++){
		d=l[0][j];
		for(i=0;i<m-1;i++){
			l[i][j]=l[i+1][j];
		}
		l[m-1][j]=d;
	}
			
			
			
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",l[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
				