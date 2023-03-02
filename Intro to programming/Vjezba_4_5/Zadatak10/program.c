#include <stdio.h>
#include <math.h>

int main(void){
	printf("Upisi broj u intervalu od 1 do 10: ");
	int n;
	int i=0;
	int znamenka;
	int dekadski=0;
	scanf("%d",&n);
	if(n>=1 && n<=10){
		for(i=0;i<n;i++){
			printf("Pisi znamenku: ");
			scanf("%d",&znamenka);
			if(znamenka<-1 && znamenka >8){
				printf("error");
			}
			dekadski+=znamenka*(pow(8,n-i-1));
		}
	}else{
		printf("Neispravni interval");
	}
	printf("%d",dekadski);
	return 0;
}