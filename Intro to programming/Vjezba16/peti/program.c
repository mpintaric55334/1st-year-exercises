#include <stdio.h>
#include <math.h>

void genPrim(int br, int n,int *rez){
	int nadeno=0;
	int i, djelitelj=0;
	while(nadeno<4){
		for(i=1; i<=sqrt(br);i++){
			if(br%i==0){
				djelitelj+=1;
			}
		}
		if(djelitelj==1){
			*(rez+nadeno)=br;
			nadeno+=1;
		}
		br+=1;
		djelitelj=0;
	}
}

int main(void){
	int br,n;
	printf("Upisi broj i n: ");
	scanf("%d %d",&br,&n);
	int lista[n];
	genPrim(br,n,lista);
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",lista[i]);
	}
	return 0;
}
	