#include<stdio.h>
#include<conio.h>

main()
{
	int n,i=1;
	clrscr();

	printf("Enter Table : ");
	scanf("%d",&n);

	while(i<=10)
	{
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}

	getch();
}