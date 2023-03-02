#include <stdio.h>
#include <string.h>

int BrojPodnizova(char *niz1,char *niz2){
	int n=0;
	*(strchr(niz1,'\n'))='\0';
	*(strchr(niz2,'\n'))='\0';
	char *c=niz1;
	while(strstr(c,niz2) != NULL){
		c=strstr(c,niz2)+1;
		++n;
	}
	return n;
}
int main(void){
	char niz[21];
	char niz2[21];
	printf("Upisi prvi niz: ");
	fgets(niz,21,stdin);
	
	printf("Upisi drugi niz: ");
	fgets(niz2,21,stdin);
	int n=BrojPodnizova(niz,niz2);
	printf("%d",n);
	return 0;
}