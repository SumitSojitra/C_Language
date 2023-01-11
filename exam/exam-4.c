#include<stdio.h>

void main(){
	
	int n,*p1,*p2,*p3;
	
	printf("Enter Array size : ");
	scanf("%d",&n);
	
	int a[n],b[n],sum=0,i;
	
	
	for(i=0; i<n; i++){
		printf("Enter Array A : ");
		scanf("%d",&a[i]);
	}	
		
	for(i=0; i<n; i++){
		printf("%d ",p1[i]);
	}
	
	for(i=0; i<n; i++){
		printf("\nEnter Array B : ");
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++){
		printf("%d ",b[i]);
	}
	
	p1=&a;
	p2=&b;
	p3=&sum;
	
	for(i=0; i<n; i++){
		*p3= *p3+ *p1[i];
		*p3= *p3+ *p2[i];
	}
	
	printf("\nsum = %d ",sum);
	
}
