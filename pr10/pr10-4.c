#include<stdio.h>

void main(){
	
	FILE *p;
	char name[50];
	
	p = fopen("E:\\FLUTTER\\pr10\\append.txt","a");
	
	printf("Enter name : ");
	scanf("%s",&name);
	
	fprintf(p,"Name : %s\n",name);
	
	fclose(p);
	
}
