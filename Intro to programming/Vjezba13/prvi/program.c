#include <stdio.h>

void getBit(unsigned int n,int r){
	printf("%d",n>>r & 0x1);
}
void printBinary(unsigned int n){
	int r=31;
	for(r=31;r>=0;r--){
		getBit(n,r);
	}
}
	

int main(void){
	unsigned int n=2147483650;
	printBinary(n);
	return 0;
}
	

