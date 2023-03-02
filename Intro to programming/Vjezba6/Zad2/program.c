#include <stdio.h>

int main(void){
	int n,i,j,d=1;
	printf("Upisi broj: ");
	scanf("%d",&n);
	if(n>=1 && n<=10){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j>=i){
					printf("%4d",d);
					d+=1;
					}else if(j<i) {
					printf("    ");
					
				}
			}
			printf("\n");
		}
	}else{
		printf("Broj je nesipravan");
	}
	return 0;
}