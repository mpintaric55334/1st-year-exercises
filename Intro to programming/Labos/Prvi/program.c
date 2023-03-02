#include <stdio.h>
int main(void){
	int broj;
	printf("Upisite cetveroznamenkasti cijeli broj > ");
	scanf("%d", &broj);
	if(broj>=1000 && broj <=9999 || broj<=-1000 && broj>=-9999){
		if(broj>0){
			printf("Druga i zadnja znamenka > %d %d\n",(broj/100)%10,broj%10);
		}else{
			printf("Druga i zadnja znamenka > %d %d\n",-(broj/100)%10,-broj%10);
		}
	}else{
		printf("Nije unesen cetveroznamenkasti cijeli broj\n");
	}
	return 0;
}