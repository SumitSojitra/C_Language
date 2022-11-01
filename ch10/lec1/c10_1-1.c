#include<stdio.h>

main()
{
	char name;
	
	printf("Enter Any Capital Character : ");
	scanf("%c",&name);
	
	if(name>=65 && name<=90)
	{
		name += 32;
	}
	printf("Lower case : %c",name);
}
