#include <stdio.h>

void sort1D(int *p,int n, char uz){
	int i,j, pom;
	for(i=0; i<n ;i++){
		for(j=0; j<n ;j++){
			if(uz == 'S'){
				if( *(p+i) > *(p+j)){
					pom= *(p+j);
					*(p+j)= *(p+i);
					*(p+i)=pom;
				}
			}else{
				if( *(p+i) < *(p+j)){
					pom = *(p+j);
					*(p+j)= *(p+i);
					*(p+i)=pom;
				}
			}
		}
	}
}
int main(void){
	int n,i;
	char uz;
	printf("Silazni/ uzlazni: ");
	scanf("%c",&uz);
	printf("Upisi dimenziju: ");
	scanf("%d",&n);
	
	int l[n];
	printf("Pisi clanove: ");
	for(i=0;i<n;i++){
	scanf("%d",&l[i]);
	}
	sort1D(&l[0],n,uz);
	
	for(i=0;i<n;i++){
		printf("%d ",l[i]);
	}
}
				