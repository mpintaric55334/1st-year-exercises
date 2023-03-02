#include <stdio.h>

int main(void){
	FILE *tok=fopen("brojevi.txt","r");
	float br=0;
	float aritmsr=0;
	int n=0;
	while(fscanf(tok,"%f",&br)==1){
		aritmsr+=br;
		n+=1;
	}
	fclose(tok);
	if(n==0){
		printf("Neispravno");
	}else{
		printf("%f",aritmsr/n);
	}
	return 0;
}