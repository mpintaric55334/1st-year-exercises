#include <stdio.h>

int main(void){
	int n,i,j;
	float d;
	printf("Upisite broj N > ");
	scanf("%d",&n);
	float l[n];
	printf("Upisite realne brojeve (%d) >");
	for(i=0;i<n;i++){
		scanf("%f",&l[i]);
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
	for(i=0;i<n;i++){
		if(l[i]>10){
			l[i]=(((l[i]*100)+0.5)/100);
		}
	}
	printf("njveci: ");
	for(i=n-1;i>n-6;i--){
		printf("%.1f ",l[i]);
	}
	printf("\n");
	printf("najmanj");
	for(i=0;i<5;i++){
		printf("%.1f ",l[i]);
	}
}
	