#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,fact=1;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	do
	{
		printf("%d ",i);
		fact = fact*i;
		i++;
	}
	while(i<=n);

	printf("\n\nFactorial Number = %d",fact);

	getch();
}

