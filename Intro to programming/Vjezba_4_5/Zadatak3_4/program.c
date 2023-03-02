#include <stdio.h>

int main(void) {
	float a,b,c,d;
	printf("Upisite granice prvoga intervala: ");
	scanf("%f%f",&a,&b);
	printf("Upisite granice drugoga intervala: ");
	scanf("%f%f",&c,&d);
	if(a<=b && c<=d){
		if(a<=c){
			if(b>=c && b<=d){
				printf("Presjek intervala je [%f,%f]",c,b);
			}else if(b>=d){
				printf("Presjek intervala je [%f,%f]",c,d);
			}else{
				printf("Presjek je prazan skup");
			}
		}else{
			printf("Neispravan unos");
		}
	}else{
		printf("Neispravan unos");
	}
	return 0;
}