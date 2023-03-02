#include <stdio.h>

int main(void){
	int br1,br2,zbroj;
	printf("Unesite brojeve > ");
	scanf("%d %d",&br1,&br2);
	if(br1>=0 && br1<=5 && br2<=5 && br2>=0){
		zbroj=br1+br2;
		if(zbroj%2==0){
			printf("Zbroj je paran (%d), pobjednik je igrac 1.",zbroj);
		}else{
			printf("Zbroj je neparan (%d), pobjednik je igrac 2.",zbroj);
		}
	}else{
		printf("Brojevi moraju biti u intervalu [0, 5]!");
	}
	return 0;
}
	