#include<stdio.h>
#include<string.h>

void pali(char a[]){
	char b[100];
	int n;
	
	strcpy(b,a);
	strrev(b);
	n = strcmp(b,a);
	
	if(n==0){
		printf("\npalindrome");
	}
	else{
		printf("\nNot palindrome");
	}
}

void main(){
	
	char a[100],i;
	
	printf("Enter string : ");
	gets(a);
	
	for(i=0; i<strlen(a); i++){
		printf("%c",a[i]);
	}
	
	pali(a);
	
}
