#include <stdio.h>

void sort2D(int *p, int n, int m, char s){
	int i,j,k;
	int pom;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(k=0;k<m;k++){
				if(s == 'S'){
					if( *(p+4*i+j)> *(p+4*i+k)){
						pom= *(p+4*i+k);
						*(p+4*i+k) = *(p+4*i+j);
						*(p+4*i+j)= pom;
					}
				}else{
					if( *(p+4*i+j) < *(p+4*i+k)){
						pom= *(p+4*i+k);
						*(p+4*i+k) = *(p+4*i+j);
						*(p+4*i+j)= pom;
					}
				}
			}
		}
	}
}
int main(void){
	int m,n;
	char s;
	printf("Silazni/uzlazni: ");
	scanf("%c",&s);
	printf("Upisi dimenzije: ");
	scanf("%d %d", &n, &m);
	int l[n][m];
	int i,j;
	printf("Upisi clanove polja: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&l[i][j]);
		}
	}
	sort2D(&l[0][0], n,m, s);
	printf("\n\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",l[i][j]);
		}
		printf("\n");
	}
	return 0;
}
			