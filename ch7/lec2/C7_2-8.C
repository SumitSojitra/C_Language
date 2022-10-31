#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	do
	{
		printf("%d ",i);
		sum += i;
		i++;
	}
	while(i<=n);

	printf("\n\nSum = %d",sum);

	getch();
}