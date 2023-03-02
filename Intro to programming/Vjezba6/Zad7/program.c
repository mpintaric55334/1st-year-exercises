#include <stdio.h>
#include <math.h>

int main(void){
	int n,br_djel,i,j;
	printf("Pisi broj: ");
	scanf("%d",&n);
	if(n%2!=0){
		i=int(sqrt(n));
		printf("%f\n",i);
		for(j=3;j<=i;j+=2){
			if(i%j==0){
				br_djel+=1;
			}
		}
		if(br_djel==0){
			printf("Prost je");
		}
	}else if(n==2){
		printf("Prost je");
	}else{
		printf("Nije prost");
	}
	return 0;
}