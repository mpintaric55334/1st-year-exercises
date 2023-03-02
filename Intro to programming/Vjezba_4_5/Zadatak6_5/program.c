#include <stdio.h>

int main(void){
	int i=1;
	int br_redaka=0;
	int br_napisanih=0;
	while(br_redaka<5){
		br_napisanih=0;
		while(br_napisanih<10){
			if(i%3==0 || i%7==0){
				br_napisanih+=1;
				if(br_napisanih!=10){
					printf("%d,",i);
				}else if(br_redaka<4 && br_napisanih==10){
					printf("%d\n",i);
					br_redaka+=1;
				}else if(br_redaka==4 && br_napisanih==10){
					printf("%d",i);
					br_redaka+=1;
					
				}
			}
			i+=1;
			
		}
	}
	return 0;
}
		