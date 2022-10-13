#include<stdio.h>

main()
{
	int i,n,j;
	
	printf("Enter Array size : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter B[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=n; i<n, j<n*2; i++,j++)
	{
		c[j]=b[i];
	}
	for(i=0; i<n*2; i++)
	{
		printf("%d ",c[i]);
	}
}
