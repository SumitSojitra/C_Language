#include<stdio.h>

main()
{
	int i;
	
	for(i=1; i<=7; i++)
	{
		if(i==1 || i==7)
		{
			printf("* * * * *\n");
		}
		else
		{
			printf("    *\n");
		}
	}
}
