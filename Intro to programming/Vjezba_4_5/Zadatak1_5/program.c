#include <stdio.h>

int main(void){
	int dan,mjesec,godina;
	printf("Unesite dan, mjesec i godinu");
	scanf("%d%d%d",&dan,&mjesec,&godina);
	switch(mjesec){
		case 1: 
			printf("Datume je %d sijecnja %d",dan,godina); 
			break;
		case 2: 
			printf("Datume je %d veljace %d",dan,godina); 
			break;
		case 3: 
			printf("Datume je %d ozujka %d",dan,godina); 
			break;
		case 4: 
			printf("Datume je %d travnja %d",dan,godina); 
			break;
		case 5: 	
			printf("Datume je %d svibnja %d",dan,godina); 
			break;
		case 6: 
			printf("Datume je %d lipnja %d",dan,godina); 
			break;
		case 7: 
			printf("Datume je %d srpnja %d",dan,godina); 
			break;
		case 8: 
			printf("Datume je %d kolovoza %d",dan,godina); 
			break;
		case 9: 
			printf("Datume je %d rujna %d",dan,godina); 
			break;
		case 10: 
			printf("Datume je %d listopada %d",dan,godina); 
			break;
		case 11: 
			printf("Datume je %d studenog %d",dan,godina);
			break;
		case 12: 
			printf("Datume je %d prosinca %d",dan,godina);
			break;
	}
	return 0;
}