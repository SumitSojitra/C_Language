#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("Enter Number : ");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		printf("%d ",i);
	}

	getch();
}