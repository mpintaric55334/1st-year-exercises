#include <stdio.h>

int main(void){
	int suma=0;
	int i=10;
	int broj=0;
	while (broj<1000){
		if(i%7==0 || ((i%10)+(i%100)/10==5)){
			suma+=i;
			broj+=1;
			i+=1;
		}else{
			i+=1;
		}
		
	}
	printf("%d",suma);
	return 0;
}