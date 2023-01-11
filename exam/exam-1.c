#include<stdio.h>

void main(){
	
	int r,c,i,j,n,sum=0,sum2=0;
	
	printf("Enter rows : ");
	scanf("%d",&r);
	printf("Enter column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter Value : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ",a[i][j]);
			if(i==j){
				sum=sum+a[i][j];
			}
		}
		printf(" \n");
	}
	
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i+j==r-1)
			{
				sum2=sum2+a[i][j];
			}
		}
		printf("\n");
	}
	printf("\nsum of diogonal = %d",sum);
	printf("\nsum of anti diogonal = %d",sum2);
}
