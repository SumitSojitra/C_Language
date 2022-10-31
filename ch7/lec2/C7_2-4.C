#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	do
	{
		printf("%d ",n);
		n--;
	}
	while(n>=1);

	getch();
}