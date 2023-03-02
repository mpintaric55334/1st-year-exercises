#include <stdio.h>

void negativci(int *p, int n, int *ng, int *br){
	*br = 0;
	int i;
	for(i=0;i<n;i++){
		if( *(p+i)<0){
			*(ng + (*br)) = *(p+i);
			*br +=1;
		}
	}
}
int main(void){
	int n,br,i;
	printf(" Upisite dimenziju: ");
	scanf("%d", &n);
	int l[n];
	printf("Upisite clanove: ");
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
	}
	int ng[n];
	negativci(&l[0], n, &ng[0],&br);
	for(i=0;i<br;i++){
		printf("%d",ng[i]);
	}
	return 0;
}