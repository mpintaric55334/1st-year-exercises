#include <stdio.h>

int main(void){
	int x,y,z;
	printf("Upisi brojeve: ");
	scanf(" %d %d %d",&x,&y,&z);
	if(((x<y)&&(y<z))||((x>y)&&(y>z))){
		printf("Brojevi su poredani i razliciti");
	}
	else{
		printf("Nisu poredani");
	}
	return 0;
}