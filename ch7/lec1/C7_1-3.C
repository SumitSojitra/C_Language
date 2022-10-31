#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("Num = %d\n",i);
		i++;
	}

	getch();
}