#include <stdio.h>

int main(void){
	int a,b,djel,i;
	printf("Unesite dva broja > ");
	scanf("%d %d", &a,&b);
	if(a<b){
		for(i=1;i<=a;i++){
			if(a%i==0 && b%i==0){
				djel=i;
			}
		}
	}else if(a>b){
		for(i=1;i<=b;i++){
			if(a%i==0 && b%i==0){
				djel=i;
			}
		}
	}
	printf("%d",djel);
	return 0;
}