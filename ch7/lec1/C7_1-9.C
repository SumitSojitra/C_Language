#include<stdio.h>
#include<conio.h>

main()
{
	int f=1,n;
	clrscr();

	printf("Enter Value : ");
	scanf("%d",&n);

	while(n>=1)
	{
		printf("%d ",n);
		f=f*n;
		n--;
	}
	printf("\n\nFactorial number = %d",f);

	getch();
}