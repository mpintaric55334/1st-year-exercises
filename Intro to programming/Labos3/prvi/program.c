#include <stdio.h>

int main(void){
	int n,i,j,fact;
	printf("Upisite broj clanova polja > ");
	scanf("%d",&n);
	int ulaz[n],izlaz[n];
	for(i=0;i<n;i++){
		printf("Upisite %d. broj > ",(i+1));
		scanf("%d",&ulaz[i]);
	}
	printf("ulaz:");
    for(i=0;i<n;i++){
       printf(" %d",ulaz[i]);
    }
    printf("\n");
	for(i=0;i<n;i++){
		fact=1;
		for(j=1;j<=ulaz[i];j++){
			fact=fact*j;
		}
		izlaz[i]=fact;
	}
	printf("izlaz: \n");
	for(i=0;i<n;i++){
		printf("%d = %d\n",ulaz[i],izlaz[i]);
	}
	return 0;
}