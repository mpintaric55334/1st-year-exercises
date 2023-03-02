#include <stdio.h>

int main(void){
	int n,i;
	printf("Unesite broj > ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0 && i%5==0){
			printf("FIZZBUZZ ");
		}else if(i%3==0){
			printf("FIZZ ");
		}else if(i%5==0){
			printf("BUZZ ");
		}else{
			printf("%d ",i);
		}
	}
	return 0;
}