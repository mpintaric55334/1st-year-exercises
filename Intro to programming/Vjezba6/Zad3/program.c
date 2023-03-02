#include <stdio.h>

int main(void){
	int m,n,d,i,j;
	printf(" Upisite m i n: ");
	scanf("%d %d", &m,&n);
	for(i=0;i<m;i++){
		d=n+i;
		for(j=0;j<n;j++){
			printf("%4d",d-j);
		}
		printf("\n");
	}
	return 0;
}