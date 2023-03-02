#include <stdio.h>

int main(void){
	char niz1[51];
	char niz2[6];
	printf("Upisite 1. niz > ");
	fgets(niz1,51,stdin);
	printf("Upisite 2. niz > ");
	fgets(niz2,6,stdin);
	int i=0,j=0;
	int duljina1=0,duljina2=0;
	while(niz1[i]!='\0'){
		if(niz1[i]=='\n'){
			niz1[i]='\0';
		}
		duljina1+=1;
		i++;
	}
	i=0;
	while(niz2[i]!='\0'){
		if(niz2[i]=='\n'){
			niz2[i]='\0';
		}
		duljina2+=1;
		i++;
	}
	i=0;
	for(i=0;i<duljina2;i++){
		for(j=0;j<duljina1-1;j++){
			if(niz1[j]==niz2[i]){
				niz1[j]=niz1[j]+17;
			}
		}
	}
	printf("Novi 1. niz = ");
	printf("%s",niz1);
	printf("\n");
	return 0;
}
			