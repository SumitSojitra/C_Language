#include<stdio.h>

main()
{
	char i,j;
	int k,s;
	
	for(i='A',s=1; i<='E',s<=5; i++,s++)
	{
		for(k=1; k<s; k++)
		{
			printf(" ");
		}	
		for(j=i; j<='E'; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}	
}
