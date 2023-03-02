void SlucajniNizVelikihSlovaIBrojeva(int n, char *polje){
	int i=0;
	for(i=0;i<n;i++){
		*(polje+i)=rand()%('a'-'A'+1)+'A';
	}
	for(i=n;i<2*n;i++){
		*(polje+i)=rand()%('9'-'0'+1)+'0';
	}
	*(polje+2*n)='\0';
}