#include<stdio.h>

void main(){
	
	int a,b,c;
	int *p1,*p2;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	p1=&a;
	p2=&b;
	
	c=*p2;
	*p2=*p1;
	*p1=c;
	
	printf("A : %d\n",*p1);
	printf("B : %d",*p2);
	
}
