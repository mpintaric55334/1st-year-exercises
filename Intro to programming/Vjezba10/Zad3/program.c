#include <stdio.h>
#include <math.h>
int main(void){
	char tekst[9];
	printf("Pisi: ");
	fgets(tekst,9,stdin);
	int indeks=11;
	_Bool da=1;
	int i=0;
	unsigned int br=0U;
	while(tekst[i]!='\0'){
		if(tekst[i]=='\n'){
			tekst[i]='\0';
		}
		if((tekst[i]<'A' || tekst[i]>'F') && (tekst[i]<'0' || tekst[i]>'9')){
			printf("Neispravna pozicija: %d,znak: %c\n",i+1,tekst[i]);
			da=0;
			break;
		}else{
			if(tekst[i]>='A' && tekst[i]<='F'){
				br+=(tekst[i]-55)*pow(16,7-i);
			}else if(tekst[i]>='0' && tekst[i]<='9'){
				br+=(tekst[i]-48)*pow(16,7-i);
			}
			
		}
		i++;
	}
	printf("%s\n",tekst);
	if(da==1){
		printf("Dekadski: %u",br);
	}
	return 0;
}
		