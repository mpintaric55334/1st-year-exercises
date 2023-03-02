#include <stdio.h>

int main(void){
	int x,i,j;
	float broj=0.0f;
	printf("Upisi broj: ");
	scanf("%d",&x);
	if(x<=20 && x>=5){
		for(i=1;i<=x+1;i++){
			for(j=0;j<i;j++){
				printf("%.1f ",broj);
				broj+=0.1;
			}
			printf("\n");
			broj=0;
		}
	}else{
		printf("Neispravan broj");
	}
	return 0;
}