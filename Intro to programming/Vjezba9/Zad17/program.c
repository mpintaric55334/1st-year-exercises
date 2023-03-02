#include <stdio.h>

int main(void){
	int n;
	while(1==1){
		printf("Pisi: ");
		scanf("%d",&n);
		if(n>='0' && n<='9'){
			printf("%c\n%d\n",n,n);
		}else{
			break;
		}
	}
	return 0;
}