#include<stdio.h>

void main(){
	
	FILE *p1,*p2;
	int a;
	
	p1 = fopen("E:\\FLUTTER\\ch14\\file1.txt","r");
	p2 = fopen("E:\\FLUTTER\\ch14\\file2.txt","w");
	
	fscanf(p1,"%d",&a);
	
	fprintf(p2,"Value from other file : %d",a)
	
}
