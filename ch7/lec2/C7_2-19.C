#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,fact=1;
	clrscr();

	printf("ENter Number : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("%d ",i);
		fact *= i;
	}
	printf("\n\nFactorial Number = %d",fact);

	getch();
}