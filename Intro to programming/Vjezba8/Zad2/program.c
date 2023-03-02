#include <stdio.h>

int main(void){
	int i=4,j=3,k=6;
	int l[i][j][k];
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<6;k++){
				l[i][j][k]=100*(i+1)+10*(j+1)+1*(k+1);
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<6;k++){
				printf("%5d",l[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
	