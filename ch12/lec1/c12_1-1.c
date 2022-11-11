#include<stdio.h>

void main(){
	
	int a;
	int *sq;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	sq = &a;
	
	printf("Square of a : %d",*sq * *sq);
	
}
