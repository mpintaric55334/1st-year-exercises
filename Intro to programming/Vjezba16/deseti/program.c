#include <stdio.h>

void izbaciNR(char *niz){
	int i=0;
	while( *(niz+i) != '\0'){
		if( *(niz+i) == '\n' && *(niz+i +1) == '\0'){
			*(niz+i) ='\0';
		}
		i+=1;
	}
}
int main(void){
	char niz[21];
	printf("Upisi niz: ");
	fgets(niz, 21,stdin);
	izbaciNR(niz);
	printf("%s!",niz);
}