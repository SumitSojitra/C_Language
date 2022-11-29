#include<stdio.h>
#include<conio.h>

main()
{
	float u,sum,add;
	clrscr();

	printf("Enter your Unit : ");
	scanf("%f",&u);

	if(u<=50)
	{
		sum=u*0.5;
	}
	else if(u<=150)
	{
		sum=(u-50)*0.75+25;
	}
	else if(u<=250)
	{
		sum=(u-150)*1.20+100;
	}
	else if(u>250)
	{
		sum=(u-250)*1.50+220;
	}

	add = sum*0.2;
	sum = sum+add;

	printf("\nTotal bill = %.2f",sum);

	getch();
}