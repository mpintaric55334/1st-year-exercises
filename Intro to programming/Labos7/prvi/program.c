struct spremnik_s{
	float prosjek;
	int *niz;
	int N;
};

void ObradaNiza(int *niz, int N){
	float prosjek=0;
	for(int i=0;i<N;i++){
		prosjek+=*(niz+i);
	}
	prosjek=prosjek/N;
	if(prosjek>rjesenje.prosjek){
		rjesenje.prosjek=prosjek;
		rjesenje.niz=niz;
		rjesenje.N=N;
	}
}