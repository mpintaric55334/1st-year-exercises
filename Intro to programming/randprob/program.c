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

void NajviseDjelitelja(int m,int n,int *p1,int *p2){
	int i,j;
	br_djel=0;
	br=0;
	djel=0;
	for(i=m+1;i<n;i++){
		djel=BrDjelitelja(i);
		if(djel >= br_djel){
			br_djel=djel;
			br=i;
		}
	}
	*p1=br;
	*p2=br_djel;
}