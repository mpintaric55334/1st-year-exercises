#include <stdio.h>

int main(void){
	int a,b,c,i=1;
	for(a=1;a<=100;a++){
		for(b=1;b<=100;b++){
			for(c=1;c<=100;c++){
				if(a*a + b*b == c*c){
					printf("%d. Piotagorina Trojka: %d^2 + %d^2 = %d^2\n",i,a,b,c);
					i+=1;
				}
			}
		}
	}
	return 0;
}