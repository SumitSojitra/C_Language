#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	int n;
	
	printf("ENter string a : ");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	n = strcmp(a,b);
	
	printf("String A : ");
	puts(a);
	printf("String B : ");
	puts(b);
	
	if(n==0)  printf("Palindrome");
	else  printf("Not Palindrome");
}
