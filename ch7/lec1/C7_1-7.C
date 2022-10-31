#include<stdio.h>
#include<conio.h>

main()
{
	int i=2000,n;
	clrscr();

	while(i<=3000)
	{
		if(i%4==0)
		{
			printf("Num = %d\n",i);
		}
		i++;
	}

	getch();
}