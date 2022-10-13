#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter The Length of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("A : %d\n",a[i]);
	}
}
