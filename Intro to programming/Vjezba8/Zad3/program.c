#include <stdio.h>

int main(void){
	int m,n;
	printf("Upisi m i n: ");
	scanf("%d %d",&m,&n);
	int l[m][n];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Pisi: ");
			scanf("%d",&l[i][j]);
		}
	}
	
	for(j=0;j<n;j++){
		int min=l[0][j];
		for(i=0;i<m;i++){
			if(l[i][j]<min){
				min=l[i][j];
			}
		}
		printf("%d. stupac: ",j+1);
		for(i=0;i<m;i++){
			if(l[i][j]==min){
				printf("(%d, %d) ",i,j);
			}
		}
		printf("\n");
				
	}
	return 0;
}