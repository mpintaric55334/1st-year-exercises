#include <stdio.h>

int main(void){
	int l[11][11];
	int i,j;
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
			if(i==0 || i==10 || j==0 || j==10 || i==j || i+j==10){
				l[i][j]=1;
			}else{
				l[i][j]=8;
			}
		}
		for(j=0;j<11;j++){
			printf("%2d",l[i][j]);
		}
		printf("\n");
	}
	return 0;
}