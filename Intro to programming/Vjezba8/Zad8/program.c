#include <stdio.h>

int main(void){
	int m,i,j;
	printf("Upisite broj pretinaca: ");
	scanf("%d",&m);
	struct pretinac_s{
		int sifra;
		int visina;
		int sirina;
		int dubina;
		float volumen;
	}pretinci[m];
	for(i=0;i<m;i++){
		printf("%d pretinac, pisi > ",i+1);
		scanf("%d %d %d %d",&pretinci[i].sifra,&pretinci[i].visina,&pretinci[i].sirina,&pretinci[i].dubina);
		pretinci[i].volumen=(float)pretinci[i].visina*pretinci[i].sirina*pretinci[i].dubina/1000;
	}
	struct pretinac_s pomocnik;
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(pretinci[i].volumen>pretinci[j].volumen){
				pomocnik=pretinci[i];
				pretinci[i]=pretinci[j];
				pretinci[j]=pomocnik;
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%7d %10.3f \n",pretinci[i].sifra,pretinci[i].volumen);
	}
	return 0;
}