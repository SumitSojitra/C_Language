#include<stdio.h>

main()
{
	int i,n,sum=0,ave;
	
	printf("Enter Array size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter A[%d] : ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
		ave=sum/n;
	}
	for(i=0; i<n; i++)
	{
		printf("A[%d] : %d\n",i,a[i]);
	}
	printf("Sum = %d\n",sum);
	printf("Average = %d",ave);
}
