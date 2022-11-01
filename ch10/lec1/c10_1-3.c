#include<stdio.h>

main()
{
	char name[100];
	
	printf("Enter Any Capital Name : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0; i<strlen(name); i++)
	{
	
			name[i] += 32;
	}
	
	printf("Lower case : %s",name);
}
