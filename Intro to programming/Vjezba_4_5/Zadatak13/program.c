#include <stdio.h>

int main(void){
	int broj=0;
	int naj_poz=0;
	int naj_neg=0;
	while(1==1){
		printf("Pisi broj: ");
		scanf("%d",&broj);
		if(broj>0){
			if(broj>naj_poz){
				naj_poz=broj;
			}
		}else if(broj<0){
			if(broj<naj_neg){
				naj_neg=broj;
			}
		}else if(broj==0){
			if(naj_poz==0 && naj_neg==0){
				printf("Nije ucitan nijedan negativan ni pozitivan broj\n");
			}else if(naj_poz==0 && naj_neg!=0){
				printf("Nije ucitan nijedan poz broj\n");
				printf("Naj neg je %d\n",naj_neg);
			}else if(naj_poz!=0 && naj_neg==0){
				printf("Nije ucitan nijedan neg broj\n");
				printf("Naj poz je %d\n",naj_poz);
			}else if(naj_poz!=0 && naj_neg!=0){
				printf("Naj neg je %d\n",naj_neg);
				printf("Naj poz je %d\n",naj_poz);
			}
			break;
		}
		
		
	}
	return 0;
}
		