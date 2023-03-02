#include <stdio.h>
#include <math.h>

void korijen(unsigned int n, double *p1, double *p2, double *p3){
	*p1=pow(n, 1/2.f);
	*p2=pow(n, 1/3.f);
	*p3=pow(n, 1/5.f);
}
int main(void){
	unsigned int n;
	double a,b,c;
	printf("Upisi n: ");
	scanf("%u", &n);
	korijen(n, &a, &b, &c);
	printf("%lf\n%lf\n%lf",a,b,c);
}
	