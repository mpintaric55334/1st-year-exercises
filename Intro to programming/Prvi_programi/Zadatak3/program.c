#include <stdio.h>

int main(void){
	float n,m;
	printf("Upisi prvi broj: ");
	scanf("%f",&n);
	printf("Upisi drugi broj: ");
	scanf("%f",&m);
	if((n>100.f && m<100.f) || (n<100.f && m>100.f)){
		printf("Jedan je veci od 100 a drugi manji");
	}
	else{
		printf("test");
	}

	return 0;
}