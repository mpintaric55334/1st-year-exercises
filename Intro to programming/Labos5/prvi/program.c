#include <stdio.h>

int maksimum(int a, int b, int c){
	if(a>b && a>c){
		return a;
	}
	if(b>c && b>a){
		return b;
	}
	if(c>b && c>a){
		return c;
	}
}
int main(void){
	int a,b,c;
	while(1==1){
		printf("Upisite tri prirodna broja > ");
		scanf("%d %d %d",&a,&b,&c);
		if(a<0 || b<0 || c<0){
			break;
		}else{
			printf("Najveci broj od %d %d %d je %d.\n",a,b,c,maksimum(a,b,c));
		}
	}
	return 0;
}
		