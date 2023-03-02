#include <stdio.h>
#include <math.h>

int main(void){
	int p_uplata[1001]={0},p_iznos[1001]={0},racun,uplata;
	_Bool uplaceno=0;
	printf("Upisujte uplate >\n");
	while(!uplaceno){
		scanf("%d %d",&racun,&uplata);
		p_uplata[racun-100000]+=1;
		p_iznos[racun-100000]+=uplata;
		if(p_uplata[racun-100000]==3){
			uplaceno=1;
		}
	}
	int suma=0,i;
	for(i=0;i<1001;i++){
		if(p_iznos[i]>suma){
			suma=p_iznos[i];
		}
	}
	printf("Najveca suma:%8d kn\n",suma);
	return 0;
}