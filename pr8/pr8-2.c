#include<stdio.h>

void main(){
	
	int a[100],n,i;
	int *p=&a;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	
	for(i=0; i<n; i++){
		printf("Enter element : ");
		scanf("%d",&(*p));
		p++;
	}
	
	p=a;
	
	for(i=0; i<n; i++){
		printf("%d ",*p);
		p++;
	}
	
}
