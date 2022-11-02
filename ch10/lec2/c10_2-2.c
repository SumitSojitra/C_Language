#include<stdio.h>
#include<string.h>

main()
{
	char e[100],p[100];
	int i;
	
	printf("Enter Your Email     : ");
	gets(e);
	printf("Enter Your Password  : ");
	gets(p);
	
	if(strcmp(e,"sumit99@gmail.com")==0)
	{
		if(strcmp(p,"sumit9")==0)
		{
			printf("\nCongratulations :)\nYour Login Successfull.");
		}
		else
		{
			printf("\nWrong Password!\nPlease enter valid Password.");
		}
	}
	else
	{
		printf("\nWrong Email!\nplease entered valid email address.");
	}
	
}
