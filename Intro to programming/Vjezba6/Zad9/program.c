#include <stdio.h>

int main(void){
	int n=0,prosli=0,suma=0;
	while(1==1){
		printf("Pisi broj: ");
		scanf("%d",&n);
		if(suma==0 && prosli==0 && n!=0){
			suma+=n;
			prosli=n;
		}else if(prosli<0 && n>0){
			suma+=n;
			prosli=n;
		}else if(prosli>0 && n<0){
			suma+=n;
			prosli=n;
		}else{
			printf("%d",suma);
			break;
		}
	}
	return 0;
}
		
	

		