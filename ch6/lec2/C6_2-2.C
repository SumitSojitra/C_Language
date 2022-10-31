#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);

	if(a==b && b==c && c==a)
	{
		printf("All are same");
	}
	else if(a==b && a!=c)
	{
		if(a<c)
		{
			printf("A and B are small");
		}
		else
		{
			printf("C is small");
		}
	}
	else if(b==c && b!=a)
	{
		if(b<c)
		{
			printf("B and C are small");
		}
		else
		{
			printf("A is small");
		}
	}
	else if(a==c && a!=b)
	{
		if(a<b)
		{
			printf("A and C are small");
		}
		else
		{
			printf("B is small");
		}
	}
	else if(a<b)
	{
		if(a<c)
		{
			printf("A is small");
		}
		else
		{
			printf("C is small");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is small");
		}
		else
		{
			printf("C is small");
		}
	}

	getch();
}