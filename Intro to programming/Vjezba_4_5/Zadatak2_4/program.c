#include <stdio.h>

int main(void){
	int a,b;
	printf("Upišite vrijednosti a i b: ");
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("Brojevi su jednaki");
	}else if(a>b){
		a=a+b;
		b=a-b;
		a=a-b;
		printf("Zamijena obavljena, a je %d i b je %d",a,b);
	}else{
		printf("Zamjena nije obavljena, a je %d i b je %d",a,b);
	}
}