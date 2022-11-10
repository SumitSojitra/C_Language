#include<stdio.h>
#include<string.h>

int findlen(char a[]){
	int len=0;
	while(a[len]!='\0')
		len++;
	return len;
}

void main(){
	char a[100],length;
	
	printf("Enter String : ");
	gets(a);
	
	length=findlen(a);
	
	printf("\nString Length : %d",length);
}
