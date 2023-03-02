#include <stdio.h>
int BrDjelitelja(int n){
	int i=0;
	int br=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			br+=1;
		}
	}
	return br;
}

void najmanjeDjelitelja(int m,int n,int *p1,int *p2){
	int i=0;
	int br=0;
	int br_djel=0;
	for(i=m;i<=n;i++){
		if(i==m){
			br=m;
			br_djel=BrDjelitelja(i);
		}
		if(BrDjelitelja(i)<br_djel){
			br_djel=BrDjelitelja(i);
			br=i;
		}
	}
			
	*p1=br;
	*p2=br_djel;
}
int main(void){
	int br=0;
	int br_djel=0;
	najmanjeDjelitelja(5,10,&br,&br_djel);
	printf("%d %d ",br,br_djel);
	return 0;
}