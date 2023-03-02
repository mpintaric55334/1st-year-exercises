#include <stdio.h>

int main(void){
	int l[31],n,i=0,d=0;
	printf("Upisi broj: ");
	scanf("%d",&n);
	while(n>=1){
		if(n>1){
			d=n/2;
			l[30-i]=n%2;
			n=d;
			i+=1;
		}
		if(n==1){
			l[30-i]=n;
			for(d=30-i;d<=30;d++){
				printf("%d",l[d]);
			}
			break;
		}
	}
	return 0;
}