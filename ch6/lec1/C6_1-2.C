#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter A :");
	scanf("%d",&a);

	if(a==0){
		printf("A is neutral.");
	}
	else if(a>0){
		printf("A is Positive.");
	}
	else{
		printf("A is Negative.");
	}

	getch();

}