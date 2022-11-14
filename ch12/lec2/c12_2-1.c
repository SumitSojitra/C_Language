#include<stdio.h>
#include<string.h>

void toggle(char *a){
	
	int i;
	for(i=0; i<strlen(a); i++)
	{
		if(a[i]>=65 && a[i]<=90)	    a[i] += 32;
		else if(a[i]>=97 && a[i]<=122)    a[i] -= 32;
	}
}

void main(){
	
	char str[100];
	
	printf("Enter String : ");
	gets(str);
		
	toggle(&str);
	
	printf("Toggle : %s",str);
	
}
