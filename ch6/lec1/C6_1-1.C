#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);

	if(a<b){
		printf("A is Small.");
	}
	else if(a==b){
		printf("A and B are same. ");
	}
	else{
		printf("B is Small.");
	}

	getch();
}