#include <stdio.h>

int main(void) {
	float a,b;
	int cijeli;
	printf("Unesi vrijednosti a i b: ");
	scanf("%f%f",&a,&b);
	
	printf("Unesite vrstu operacije- 1 zbrajanje,2 mnozenje: ");
	scanf("%d",&cijeli);
	if(cijeli==1){
		printf("Zbroj je %.5f",a+b);
	}else if(cijeli==2){
		printf("Umnozak je %.5f",a*b);
	}else{
		printf("Morate unijet ili 1 ili 2");
	}
	return 0;
}