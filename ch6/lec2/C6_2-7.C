#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;
	clrscr();

	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	printf("Enter D : ");
	scanf("%d",&d);
	printf("Enter E : ");
	scanf("%d",&e);

	(a>b) ? (a>c) ? (a>d) ? (a>e) ? printf("A is big")
				      : printf("E is big")
			      : (d>e) ? printf("D is big")
				      : printf("E is big")
		      : (c>d) ? (c>e) ? printf("C is big")
				      : printf("E is big")
			      : (d>e) ? printf("D is big")
				      : printf("E is big")
	      : (b>c) ? (b>d) ? (b>e) ? printf("B is big")
				      : printf("E is big")
			      : (d>e) ? printf("D is big")
				      : printf("E is big")
		      : (c>d) ? (c>e) ? printf("C is big")
				      : printf("E is big")
			      : (d>e) ? printf("D is big")
				      : printf("E is big");

	getch();
}