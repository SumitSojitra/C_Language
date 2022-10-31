#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;
	}
	while(i<=n);

	getch();
}