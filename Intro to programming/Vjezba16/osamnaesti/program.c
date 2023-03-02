#include <stdio.h>
#include <math.h>
struct tocka_s{
		double x;
		double y;
	};
double udaljTocka(struct tocka_s t1, struct tocka_s t2){
	double udaljenost;
	udaljenost=sqrt((t1.y-t2.y)*(t1.y-t2.y)+ (t1.x-t2.x)*(t1.x-t2.x));
	return udaljenost;
}
int main(void){

	struct tocka_s tocka1;
	struct tocka_s tocka2;
	printf("Upisi za prvu tocku: ");
	scanf("%lf %lf",&tocka1.x,&tocka1.y);
	printf("Upisi za drugu tocku: ");
	scanf("%lf %lf",&tocka2.x,&tocka2.y);
	double udaljenost;
	udaljenost=udaljTocka(tocka1,tocka2);
	printf("%lf",udaljenost);
	return 0;
}
	