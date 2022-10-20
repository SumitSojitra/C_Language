#include<stdio.h>

main()
{
	int i,j,n,sum=0;
	
	printf("Enter matrix size : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter Value : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==0 || i==n-1 || j==0 || j==n-1)
			{
				printf("  ");
			}
			else
			{
				printf("%d  ",a[i][j]);
				sum=sum+a[i][j];
			}
		}
		printf("\n");
	}
	printf("\n\nSum = %d",sum);
}
