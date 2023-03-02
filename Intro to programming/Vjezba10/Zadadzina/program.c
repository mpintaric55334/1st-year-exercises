#include <stdio.h>
#incldue <stdlib.h>

int main(void){
	int n,i,j;
	printf("Pisi: ");
	scanf("%d",&n);
	struct ucenik_s{
		int mat_br;
		int god;
	}lista[n];
	struct ucenik_s picka;
	for(i=0;i<n;i++){
		printf("Pisi %d ucenika: ",i+1);
		scanf("%d %d",lista[i].mat_br,lista[i].god);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(lista[i].god<lista[j].god){
				picka=lista[i];
				lista[i]=lista[j];
				lista[j]=picka;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(lista[i].god==lista[j].god){
				if(lista[i].god<lista[j].god){
					picka=lista[i];
					lista[i]=lista[j];
					lista[j]=picka;
				}
			}
		}
	}
	
		
	