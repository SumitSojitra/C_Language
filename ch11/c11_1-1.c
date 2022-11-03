#include<stdio.h>

void cube(int a){
	printf("Cube : %d\n",a*a*a);
}

void main(){
	int a;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	cube(a);
}
