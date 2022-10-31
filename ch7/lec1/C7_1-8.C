#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,sum=0;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("Num = %d\n",i);
		sum += i;
		i++;
	}
	printf("\nSum = %d",sum);

	getch();
}