#include <stdio.h>

int main(void){
	int prim=0,i=2,j,br_djel=0;
	while(prim<25){
		for(j=1;j<i;j++){
			if (i%j==0){
				br_djel+=1;
			}
		}
		if(br_djel==1){
			prim+=1;
			printf("%d\n",i);
			
		}
		i+=1;
		br_djel=0;
	}
	return 0;
}