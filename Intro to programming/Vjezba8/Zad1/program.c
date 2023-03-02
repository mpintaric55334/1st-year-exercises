#include <stdio.h>

int main(void){
	float l[5][7]={{[5]=0.9},{0.0},{31.1,32.2,33.3,34.2},{1.0,4.0,[6]=7.7}};
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			printf("%.1f ",l[i][j]);
		}
		printf("\n");
	}
	return 0;
	}
