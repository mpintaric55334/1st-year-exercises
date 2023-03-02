#include <stdio.h>

int main(void){
	int n,i,j;
	printf("Upisite broj N > ");
	scanf("%d",&n);
	int l[n][n];
	printf("Upisite %dx%d clanova >\n",n,n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&l[i][j]);
		}
	}
	int br=0;
	printf("Ispis:\n");
	while(br<n){
		i=br;
		j=br;
		if(br<n-1){
			for(j=br;j<n;j++){
				printf("%d ",l[i][j]);
			}
			j=br;
			for(i=br+1;i<n;i++){
				printf("%d ",l[i][j]);
			}
			i=br;
			br+=1;
			if(br==n){
				break;
			}
		}else{
			printf("%d ",l[n-1][n-1]);
			break;
		}
	}
	return 0;
}
		
	