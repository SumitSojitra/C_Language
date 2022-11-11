#include<stdio.h>

void main(){
	
	int a,b,c;
	int *i,*j;
	
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("Before the swapping\na = %d\nb = %d\n",a,b);
	
	i=&a;
	j=&b;
	
	c=*i;
	*i=*j;
	*j=c;
	
	printf("After the swapping \na = %d\nb = %d\n",a,b);
	
}
