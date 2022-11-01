#include<stdio.h>

main()
{
	char name[100];
	
	printf("Enter Any Name : ");
	scanf("%s",&name);
	
	int i;
	
	for(i=0; i<1; i++)
	{
		if(name[i]>=97 && name[i]<=122)  
		{
			name[i] -= 32;
		}
	}
	for(i=1; i<strlen(name); i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i] += 32;	
		}	
	}
	
	printf("Title Case : %s",name);
}
