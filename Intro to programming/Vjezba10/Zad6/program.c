#include <stdio.h>

int main(void){
	char tekst[9];
	int i=0;
	int n;
	printf("Pisi: ");
	while(1==1){
		scanf("%d",&n);
		if(n>='A' && n<='Z'){
			tekst[i]=(char)n;
		}else{
			tekst[i]='\0';
			break;
		}
		
		i++;
	}
	printf("%s",tekst);
	return 0;
}