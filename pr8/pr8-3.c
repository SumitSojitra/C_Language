#include<stdio.h>

void main(){
	
	int a[100],i,n;
	int *p;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	p=a;
	
	for(i=0; i<n; i++){
		printf("Enter element : ");
		scanf("%d",&(*p));
		p++;
	}
	
	p=&a[n-1];
	
	for(i=0; i<n; i++){
		printf("%d ",*p);
		p--;
	}
	
}
