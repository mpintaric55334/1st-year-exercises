#include <stdio.h>

int main(void){
	int n,br=0,tm=0;
	printf("Upisi broj: ");
	scanf("%d",&n);
	printf("%d ",n);
	tm+=1;
	br+=1;
	while(1==1){
		if(n==1){
			printf("\n");
			break;
			}
		if(n%2==0){
			n=n/2;
			tm+=1;
			printf("%d ",n);
			br+=1;
			if(br==10){
				printf("\n");
				br=0;
			}
			if(n==1){
				printf("\n");
				break;
			}
		}else if(n%2!=0){
			n=3*n+1;
			tm+=1;
			printf("%d ",n);
			br+=1;
			if(br==10){
				printf("\n");
				br=0;
			}
			if(n==1){
				printf("\n");
				break;
			}
		}
	}
	printf("%d",tm-1);
	return 0;
}
			
			
	