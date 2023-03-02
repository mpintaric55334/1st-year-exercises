#include <stdio.h>

int main(void){
	int n,i,j,d;
	printf("Pisi n: ");
	scanf("%d",&n);
	int l[n];
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(l[i]<l[j]){
				d=l[i];
				l[i]=l[j];
				l[j]=d;
			}
		}
	}
	for(i=n-1;i>n-6;i--){
		printf("%d ",l[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",l[i]);
	}
	
	return 0;
}