#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("Enter Row \t:");
	scanf("%d",&r);
	printf("Enter Column \t:");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("length = %d",r*c);
}
