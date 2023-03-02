#include <stdio.h>
#include <math.h>
#define Pi 3.141592f 

int main(void){
	float r;
	float v;
	scanf("%f",&r);
	if(r>0){
		v=(4.f/3.f)*pow(r,3)*Pi;
		printf("Volumen kugle polumjera %.3f  je %.3f",r,v);
	}
	else{
		printf("Neispravan radijus");
	}
	return 0;
}
	
		