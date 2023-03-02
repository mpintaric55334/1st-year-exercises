#include <stdio.h>
#include <math.h>

int main(void){
	printf("Upisi broj u intervalu od 1 do 31: ");
	int n;
	int i=0;
	int znamenka;
	int dekadski=0;
	scanf("%d",&n);
	if(n>=1 && n<=31){
		for(i=0;i<n;i++){
			printf("Pisi znamenku: ");
			scanf("%d",&znamenka);
			if(znamenka!=0 && znamenka !=1){
				printf("error");
			}
			dekadski+=znamenka*(pow(2,n-i-1));
		}
	}else{
		printf("Neispravni interval");
	}
	printf("%d",dekadski);
	return 0;
}