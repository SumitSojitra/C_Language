#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	int i,letter,digit,spe_char;
	letter=digit=spe_char=0;
	
	printf("Enter Your password : ");
	gets(a);
	
	if(strlen(a)==6)
	{
		for(i=0; a[i]!=NULL; i++)
		{
			if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
				letter=1;
			if((a[i]>=48 && a[i]<=57))
				digit=1;
			if((a[i]>=32 && a[i]<=47) || (a[i]>=58 && a[i]<=64) || (a[i]>=91 && a[i]<=96) || (a[i]>=123 && a[i]<=126))
				spe_char=1;
		}
		if(letter==0 || digit==0 || spe_char==0)
		{
			printf("Invalid Password....\nPassword must be contain one letter,one digit and one special character...!");
		}
		else  printf("Valid Password. :)");
	
	}
	else printf("Password must be Six characters..");
}
