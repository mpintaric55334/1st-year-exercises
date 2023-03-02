#include <stdio.h>
int main(void){
	int br;
	while(1==1){
		printf("Pisi: ");
		scanf("%d",&br);
		if(br==0){
			break;
		}else{
			printf("%o\n%x\n",br,br);
		}
	}
	return 0;
}