#include <stdio.h>
#include <math.h>

float PiSuma(int n){
    float pi=0;
    int i;
    for(i=1;i< n+1; i++){
        if(i%2==0){pi-=1.f/(2.f*i-1.f);
        } else {
            pi+=1.f/(2.f*i-1.f);
        }
    }
    return 4*pi;
}

float Povrsina(float d, int n){
 float r = d/2.f;
 return r*r*PiSuma(n);
}

int main(void) {
int n;
float d, drugi,pov;
printf("Upisite broj clanova reda > ");
scanf("%d",&n);
printf("Upisite promjer kruznice > ");
scanf("%f",&d);
float r= d/2;
drugi = r*r*(asin(1.)*2);
if(n<101 && n>0 && d<101 && d>0){
    pov=Povrsina(d,n);
    printf("Povrsina kruznice (PI pomocu reda) > %.3f\n",pov);
    printf("Povrsina kruznice (PI pomocu asin) > %.3f\n",drugi);
    printf("Apsolutna razlika > %.3f\n",fabs(drugi - pov));
} else {printf("Ucitani parametri nisu dobri!\n");}
 return 0;
}