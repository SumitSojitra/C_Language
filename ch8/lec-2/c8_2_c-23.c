#include<stdio.h>

main()
{
	int i;
	
	for(i=1; i<=7; i++)
	{
		if(i==1 || i==4)
		{
			printf("* * *\n");
		}
		else if(i==2 || i==6)
		{
			printf("*     *\n");
		}
		else if(i==3 || i==5)
		{
			printf("*    *\n");
		}
		else
		{
			printf("*      *\n");
		}
	}
}
