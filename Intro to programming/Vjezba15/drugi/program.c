#include <stdio.h>
#include <math.h>

int maks(int *p1, int *p2){
	int a;
	if(*p1 >= *p2){
		a=*p1;
	}else{
		a=*p2;
	}
	return a;
}
int main(void){
	int a,b;
	printf("Upisite dva cijela broja: ");
	scanf("%d %d",&a,&b);
	printf("Rezultat je %d",maks(&a,&b));
	return 0;
}