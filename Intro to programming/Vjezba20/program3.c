#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int l[11]={0};
	srand((unsigned int)time(NULL));
	for(int i=0;i<5000000;i++){
		l[(int)((double)rand()/RAND_MAX * (15.0-10.0)+10.0)+=1;
	}
	for(int i=0;i<11;i++){
		printf("%d\n",l[i]);
	}
	return 0;
}