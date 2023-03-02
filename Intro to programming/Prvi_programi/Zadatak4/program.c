#include <stdio.h>
#include <math.h>
int main(void){
	float f,c;
	printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.\n Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj\n");
	int a;
	printf("Upisite broj: ");
	scanf("%d",&a);
	if(a==1){
		printf("Upisite temperaturu u F: ");
		scanf("%f",&f);
		c=(f-32.f)*(5.f / 9.f);
		printf("Temperatura u celzijusima je %f",c);
	}
	else{
		printf("Upisite temperaturu u C: ");
		scanf("%f",&c);
		f=c*(9.f / 5.f)+32.f;
		printf("Temperatura u fahrenheitima je %f",f);
	}
	return 0;
}
	