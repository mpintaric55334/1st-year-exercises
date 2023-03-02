#include <stdio.h>

int main(void){
	int i=1;
	float suma=0;
	for(i=1;i<=1000;i++){
		if(i % 2!=0){
			suma+=1.f/i;
		}else{
			suma-=1.f/i;
		}
	}
	printf("%f",suma);
	return 0;
	
}