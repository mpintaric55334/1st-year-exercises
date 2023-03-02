#include <stdio.h>
#include <string.h>

int main(void){
	char niz1[61];
	char niz2[61];
	char niz3[61];
	char *c;
	printf("Upisite prvi niz: ");
	fgets(niz1,61,stdin);
	printf("Upisite drugi niz: ");
	fgets(niz2,61,stdin);
	printf("Upisite treci niz: ");
	fgets(niz3,61,stdin);
	c=strchr(niz1,'\n');
	if(c!=NULL){
		c='\0';
	}
	c=strchr(niz2,'\n');
	if(c!=NULL){
		c='\0';
	}
	c=strchr(niz3,'\n');
	if(c!=NULL){
		c='\0';
	}
	char*p1=niz1,*p2=niz2,*p3=niz3,*pom=NULL;
	if(strcmp(p1,p2)>0){
		pom=p1;
		p1=p2;
		p2=pom;
	}
	if(strcmp(p1,p3)>0){
		pom=p1;
		p1=p3;
		p3=pom;
	}
	if(strcmp(p2,p3)>0)
	{
		pom=p2;
		p2=p3;
		p3=pom;
	}
	printf("%s\n%s\n%s",p1,p2,p3);
	return 0;
}
	