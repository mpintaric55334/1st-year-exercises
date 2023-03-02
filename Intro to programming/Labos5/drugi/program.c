#include <stdio.h>
#include <math.h>
float PiSuma(int n){
	float suma=0;
	int j=1;
	for(int i=0; i<n;i++){
		suma += (pow(-1.,i))/j;
		j+=2;
	}
	return 4*suma;
}

float Volumen(float d,int n){
	float v=0;
	float r=d/2;
	v=pow(r,3)*PiSuma(n);
	v*=(4./3.);
	return v;
}

int main(void){
	int n;
	float d;
	float v1,v2,as;
	printf("Upisite broj clanova reda > ");
	scanf("%d",&n);
	printf("Upisite promjer kugle > ");
	scanf("%f",&d);
	float r=d/2;
	if(d<1 || d>100 || n<1 || n>100){
		printf("Ucitani parametri nisu dobri!\n");
	}else{
		v1=Volumen(d,n);
		v2=pow(r,3)*(asin(1.0)*2);
		v2*=(4./3.);
		as=fabs(v1-v2);
		printf("Volumen kugle (PI pomocu reda) > %.4f \n",v1);
		printf("Volumen kugle (PI pomocu asin) > %.4f \n",v2);
		printf("Apsolutna razlika > %.4f \n",as);
	}
	return 0;
}