#include<stdio.h>

void main(){
	
	FILE *p;
	int a;
	
	p = fopen("E:\\FLUTTER\\pr10\\read1.txt","r");
	
	fscanf(p,"%d",&a);
	
	printf("Value is : %d",a);
	
	fclose(p);
	
}
