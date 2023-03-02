#include <stdio.h>

int main(void){
	char c1,c2;
	printf("Upisite dva znaka");
	scanf("%c %c",&c1,&c2);
	int i=0;
	for(i=c1;i<=c2;i++){
		printf("%c",i);
	}
	return 0;
}