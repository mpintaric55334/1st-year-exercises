#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void){
	static _Bool pronaden=0;
	if(!pronaden){
		srand((unsigned int)time(NULL));
		pronaden=1;
	}
	int c;
	int br_slova=0;
	int br_znamenki=0;
	int br_ostali=0;
	for(int i=0;i<1000;i++){
		c=rand()% (126-32+1)+32;
		if(isdigit(c)){
			++br_znamenki;
		}else if(isalpha(c)){
			++br_slova;
		}else{
			++br_ostali;
		}
	}
	printf("Slova : %d\n",br_slova);
	printf("Brojevi : %d\n",br_znamenki);
	printf("Ostalo : %d\n",br_ostali);
	return 0;
}