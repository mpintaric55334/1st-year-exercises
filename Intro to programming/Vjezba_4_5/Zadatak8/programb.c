#include <stdio.h>

int main(void){
	int n=0;
	int suma=0;
	do{
		printf("Upisite broj: ");
		scanf("%d",&n);
		if(n%3==0 || n%7==0){
			suma+=n;
		}
	}while(n%3==0 || n%7==0);
	printf("%d",suma);
	return 0;
}