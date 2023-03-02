#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void *genText(int duljina_niza,int n,char *niz,char *niz1){
	static _Bool init=0;
	if(!init){
		srand((unsigned int)time(NULL));
		init=1;
	}
	int duljina=0;
	int j=0;
	while(niz[j]!='\0'){
		duljina+=1;
		j+=1;
	}
	for(int i=0;i<n;i++){
		niz1[i]=niz[rand()%(duljina)];
	}
	niz1[60]='\0';
}
int main(void){
	char niz[61];
	int n;
	printf("upisite niz: ");
	fgets(niz,61,stdin);
	printf("Pisi n: ");
	scanf("%d",&n);
	char niz1[n+1];
	for(int i=0;i<3;i++){
		genText(60,n,niz,niz1);
		printf("%s\n",niz1);
	}
	return 0;
}