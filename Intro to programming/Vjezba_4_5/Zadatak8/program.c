#include <stdio.h>

int main(void){
	int n=0;
	int suma=0;
	while(1==1){
		printf("Upisite broj: ");
		scanf("%d",&n);
		if(n%3==0 || n%7==0){
			suma+=n;
		}else{
			break;
		}
	}
	printf("%d",suma);
	return 0;
}