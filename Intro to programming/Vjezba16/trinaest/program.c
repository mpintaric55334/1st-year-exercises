#include <stdio.h>

_Bool umetniZnak(char *niz, char z, int poz){
	int i=0,duljina=0;
	while( *(niz+i) != '\0'){
		if( *(niz+i)== '\n' && *(niz+i+1) == '\0'){
			*(niz+i)= '\0';
		}
		i+=1;
		duljina+=1;
	}
	int pom;
	if(poz>=0 && poz<duljina){
		for(i=duljina-2;i>=poz;i--){
			*(niz+i+1)= *(niz+i);
		}
		*(niz+poz)=z;
		return 1;
	}else{
		return 0;
	}
	
}
int main(void){
	char niz[21], z;
	int poz,i;
	_Bool bol;
	printf("Upisite niz: ");
	fgets(niz,21,stdin);
	printf("Upisite znak: ");
	scanf("%c",&z);
	printf("Upisite poziciju: ");
	scanf("%d",&poz);
	bol=umetniZnak(niz,z,poz);
	if(bol==1){
		printf("%s",niz);
	}else{
		printf("Neispravno");
	}
	return 0;
}