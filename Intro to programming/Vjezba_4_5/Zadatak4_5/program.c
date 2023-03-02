#include <stdio.h>

int main(void){
	int a,b;
	printf("1.a+b\n");
	printf("2.a-b\n");
	printf("3.a*b\n");
	printf("4.a/b\n");
	int operacija;
	printf("Upisi broj operacije: ");
	scanf("%d",&operacija);
	switch(operacija){
		case 1:
			printf("Upisite a i b: ");
			scanf("%d%d",&a,&b);
			printf("Zbroj je %d",a+b);
			break;
		case 2:
			printf("Upisite a i b: ");
			scanf("%d%d",&a,&b);
			printf("Razlika je %d",a-b);
			break;
		case 3:
			printf("Upisite a i b: ");
			scanf("%d%d",&a,&b);
			printf("Umnozak je %d",a*b);
			break;
		case 4:
			printf("Upisite a i b: ");
			scanf("%d%d",&a,&b);
			if(b!=0){
				printf("Kolicnik je %d",a/b);
			}else{
				printf("Neispravni brojevi");
			}
			break;
		default:
			printf("Neisparvna operacija");
			break;
	}
	return 0;
}
			
	