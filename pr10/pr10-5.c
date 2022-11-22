#include<stdio.h>

void main(){
	
	FILE *p1,*p2;
	int a;
	
	p1 = fopen("E:\\FLUTTER\\pr10\\read.txt","r");
	p2 = fopen("E:\\FLUTTER\\pr10\\copy.txt","w");
	
	fscanf(p1,"%d",&a);
	
	fprintf(p2,"Value from another file : %d",a);
	
	fclose(p1);
	fclose(p2);
}
