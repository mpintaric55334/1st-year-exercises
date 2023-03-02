#include <stdio.h>

void izbaciSamoglase(char *niz,int *br){
	*br=0;
	int i=0;
	while(*(niz+i) != '\0'){
		*br+=1;
		i+=1;
	}
	i=0;
	while(*(niz+i) != '\0'){
		if(*(niz+i)=='a' || *(niz+i)=='e' || *(niz+i)=='i' || *(niz+i)=='o' || *(niz+i)=='u' ||*(niz+i)=='A' || *(niz+i)=='E' || *(niz+i)=='I' || *(niz+i)=='O' || *(niz+i)=='U'){
			*(niz+i)='\0';
			*br-=1;
		}
		i+=1;
	}
}
int main(void){
	char niz[21];
	int br=0;
	printf("Pisi niz: ");
	fgets(niz,21,stdin);
	izbaciSamoglase(niz,&br);
	int i=0;
	for(i=0;i< br;i++){
		printf("%c",niz[i]);
	}
	return 0;
}