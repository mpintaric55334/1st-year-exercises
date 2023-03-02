#include <stdio.h>
int main(void){
	char tekst[20];
	printf("Pisi: ");
	fgets(tekst,20,stdin);
	int i=0;
	int najveci=0;;
	while(tekst[i]!='\0'){
		if(tekst[i]=='\n'){
			tekst[i]='\0';
		}
		
		if(tekst[i]>najveci){
			najveci=tekst[i];
		}
		i++;
	}
	printf("%s\n",tekst);
	printf("%d",najveci);
	return 0;
}
	