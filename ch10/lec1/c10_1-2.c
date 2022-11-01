#include<stdio.h>

main()
{
	char name;
	
	printf("Enter Any Small Character : ");
	scanf("%c",&name);
	
	if(name>=97 && name<=122)
	{
		name -= 32;
	}
	printf("Capital case : %c",name);
}
