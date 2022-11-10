#include<stdio.h>

int arraysum(int a[],int n){
	int i,sum=0;
	
	for(i=0; i<n; i++){
		sum+=a[i];
	}	
	return sum;
}

void main(){
	
	int i,n;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n],add;
	
	for(i=0; i<n; i++){
		printf("ENter Ellement : ");
		scanf("%d",&a[i]);
	}
	
	add=arraysum(a,n);
	
	printf("\nArray length : %d",add);
	
}
