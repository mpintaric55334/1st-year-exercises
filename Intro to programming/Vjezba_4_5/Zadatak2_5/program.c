#include <stdio.h>

int main(void){
	int br;
	printf("Upisite broj bodova");
	scanf("%d",&br);
	switch(br){
		case 1: /*FALLTHROUGH*/
		case 2: /*FALLTHROUGH*/
		case 3: /*FALLTHROUGH*/
		case 4: /*FALLTHROUGH*/
		case 5: /*FALLTHROUGH*/
		case 6: /*FALLTHROUGH*/
		case 7: /*FALLTHROUGH*/
		case 8: /*FALLTHROUGH*/
		case 9:
			printf("Ocjena nedovoljan");
			break;
		case 10: /*FALLTHROUGH*/
		case 11: /*FALLTHROUGH*/
		case 12: /*FALLTHROUGH*/
		case 13:
			printf("Ocjena dovoljan");
			break;
		case 14: /*FALLTHROUGH*/
		case 15: /*FALLTHROUGH*/
		case 16: /*FALLTHROUGH*/
		case 17:
			printf("Ocjena dobar");
			break;
		case 18: /*FALLTHROUGH*/
		case 19: /*FALLTHROUGH*/
		case 20: /*FALLTHROUGH*/
		case 21:
			printf("Ocjena vrlo dobar");
			break;
		case 22: /*FALLTHROUGH*/
		case 23: /*FALLTHROUGH*/
		case 24: /*FALLTHROUGH*/
		case 25:
			printf("Ocjena izvrstan");
			break;
		default:
			printf("Neispravan broj bodova");
			break;
	}
	return 0;
}