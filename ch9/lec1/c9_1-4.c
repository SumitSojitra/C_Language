#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Array Size : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[i];
	
	for(i=0; i<n; i++)
	{
		printf("Enter A : ");
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("A[%d] : %d\n",i,a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter B : ");
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("B[%d] : %d\n",i,b[i]);
	}
	for(i=0; i<n; i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("C[%d] : %d\n",i,c[i]);
	}
}
