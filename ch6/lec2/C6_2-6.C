#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	printf("Enter D : ");
	scanf("%d",&d);

	(a>b) ? (a>c) ? (a>d) ? printf("A is big")
			      : printf("D is big")
		      : (c>d) ? printf("C is big")
			      : printf("D is big")
	      : (b>c) ? (b>d) ? printf("B is big")
			      : printf("D is big")
		      : (c>d) ? printf("C is big")
			      : printf("D is big");

	getch();
}