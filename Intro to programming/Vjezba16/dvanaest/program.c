#include <stdio.h>

char *zadnjiZnak(char *niz, char z){
	int i=0;
	char *rez=NULL;
	while(*(niz+i)!='\0'){
		if(*(niz+i)==z){
			rez=niz+i;
		}
		i+=1;
	}
	return rez;
}
int main(void){
	char niz[21],z,*p;
	printf("Upisite niz: ");
	fgets(niz,21,stdin);
	printf("Upisite znak: ");
	scanf("%c",&z);
	p=zadnjiZnak(niz,z);
	if(p !=NULL){
		printf("%d",p-niz);
	 
	}else{
		printf("Nema");
	}
	return 0;
}