#include<stdio.h>

main()
{
	char name[100];
	
	printf("Enter Any Small Name : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0; i<strlen(name); i++)
	{
	
			name[i] -= 32;
	}
	
	printf("Upper case : %s",name);
}
