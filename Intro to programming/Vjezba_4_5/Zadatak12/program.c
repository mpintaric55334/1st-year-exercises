#include <stdio.h>

int main(void){
	int m,n,rezultat,m_fak=1,n_fak=1,mn_fak=1,i;
	printf("Upisi m i n: ");
	scanf("%d %d",&m,&n);
	if(m>=0 && n>=0 && m>=n){
		for(i=1;i<m+1;i++){
			m_fak*=i;
			
		}
		
		for(i=1;i<n+1;i++){
			n_fak*=i;
		}
		for(i=1;i<(m-n)+1;i++){
			mn_fak*=i;
		}
		rezultat=m_fak / (n_fak * mn_fak);
		printf("Rezultat je %d",rezultat);
		
	}else{
		printf("m i n su neispravni");
	}
	return 0;
}