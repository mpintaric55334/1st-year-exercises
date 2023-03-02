#include <stdio.h>

int main(void){
	FILE *tok=fopen("mjerenja.txt","r");
	int dan,br_mjerenja;
	int sat;
	float temp;
	float ukupno=0.f;
	while(fscanf(tok,"#%d#%d",&dan,&br_mjerenja)==2){
		for(int i=0;i<br_mjerenja;i++){
			fscanf(tok,"#%d#%f %*[\n]",&sat,&temp);
			ukupno+=temp;
		}
		ukupno=ukupno/br_mjerenja;
		printf("Dan: %d,Broj mjerenja: %d, Prosjek: %f \n",dan,br_mjerenja,ukupno);
		ukupno=0;
	}
	return 0;
}