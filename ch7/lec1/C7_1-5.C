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
		if(i%2==1)
		{
			printf("Num = %d\n",i);
		}
		i++;
	}

	getch();
}