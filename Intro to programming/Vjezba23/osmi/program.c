#include <stdio.h>

int main(void){
	FILE *tok=fopen("fibonacci.bin","wb");
	int clan2=0,clan1=0;
	int clan=0;
	int i=0;
	for(i=0;i<40;i++){
		if(i==0){
			clan=1;
		}else if(i==1){
			clan=1;
			clan2=1;
			clan1=1;
		}else{
			clan=clan1+clan2;
			clan2=clan1;
			clan1=clan;
		}
		fwrite(&clan,sizeof(clan),1,tok);
		printf("%d\n",clan);
	}
	return 0;
}