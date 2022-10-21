#include<stdio.h>

main()
{
	char i,j;
	int k,s;
	
	for(i='E',s=5; i>='A',s>=1; i--,s--)
	{
		for(k=1; k<=5-s; k++)
		{
			printf(" ");
		}	
		for(j='A'; j<=i; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}	
}
