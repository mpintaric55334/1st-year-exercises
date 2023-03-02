#include <stdio.h>
int main(void){
	unsigned int n;
	while(1==1){
		printf("Pisi: ");
		scanf("%x",&n);
		if(n==0){
			break;
		}else{
			printf("%llu\n",n);
		}
	}
	return 0;
}