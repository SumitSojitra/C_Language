#include<stdio.h>
#include<string.h>

main()
{
	char e[100],p[100],ce[100],cp[100];
	int i,ch,dig,at,sp,r,t;
	ch=dig=at=sp=0;
	
	printf("Enter Your Email : ");
	gets(e);
	printf("Enter Your Password : ");
	gets(p);
	
	printf("Confirm your Email : ");
	gets(ce);
	printf("Confirm your password : ");
	gets(cp);
	
	r=strcmp(e,ce);
	t=strcmp(p,cp);
	
	for(i=0; i<strlen(e); i++)
	{
		if(e[i]>=65 && e[i]<=90 || e[i]>=97 && e[i]<=122)
		{
			ch++;
		}
		else if(e[i]>=48 && e[i]<=57)
		{
			dig++;
		}
		else if(e[i]=='@')
		{
			at++;
		}
	}
	if(ch>0 && dig>0 && at==1)  printf("\n");
	else  printf("Invalid Email\n");
	
	if(strlen(p)==6)
	{
	for(i=0; i<strlen(p); i++)
	{
		for(i=0; p[i]!=NULL; i++)
		{
			if((p[i]>=65 && p[i]<=90) || (p[i]>=97 && p[i]<=122))
				ch=1;
			if((p[i]>=48 && p[i]<=57))
				dig=1;
			if((p[i]>=32 && p[i]<=47) || (p[i]>=58 && p[i]<=64) || (p[i]>=91 && p[i]<=96) || (p[i]>=123 && p[i]<=126))
				sp=1;
		}
		if(ch==0 || dig==0 || sp==0)	printf("Invalid Password....\nPassword must be contain one letter,one digit and one special character...!");
		else  printf("\n");
	}
	}	
	else printf("Password must be Six characters..");
	
	if((r==0 && t==0) && (ch>0 && dig>0 && at==1)){
		printf("\nLogin succesfull.\n");
	}
	else{
		printf("\nLog in failed.\nConfirmation details are mismathced");
	}
	
	
}
