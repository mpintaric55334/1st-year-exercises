#include <stdio.h>

void velikaMala(char *niz, int *velika, int *mala){
	*velika=0;
	*mala=0;
	while(*niz !='\0'){
		if(*niz <= 'Z' && *niz >= 'A'){
			*velika+=1;
		}else if(*niz<='z'&& *niz>='a'){
			*mala+=1;
		}
		niz++;
	}
}
int main(void){
	char niz[21];
	int velika=0,mala=0;
	printf("Pisi niz: ");
	fgets(niz,21,stdin);
	velikaMala(niz, &velika,&mala);
	printf("Velika: %d Mala %d",velika,mala);
	return 0;
}