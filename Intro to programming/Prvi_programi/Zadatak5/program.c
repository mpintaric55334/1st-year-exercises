#include <stdio.h>
int main(void){
	int x,y;
	printf("Upisi x: ");
	scanf("%d",&x);
	printf("Upisi y: ");
	scanf("%d",&y);
	if((x-y>100)&&(y%2==0 || y<0)){
		printf("Istina je");
	}
}