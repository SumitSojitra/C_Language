#include<stdio.h>

main()
{
	char i,j;
	int k,s;
	
	for(i='A',s=1; i<='E',s<=5; i++,s++)
	{
		for(k=1; k<=5-s; k++)
		{
			printf(" ");
		}	
		for(j=i; j>='A'; j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}	
}
