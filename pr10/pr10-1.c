#include<stdio.h>

void main(){
	
	FILE *p;
	int n;
	
	p = fopen("E:\\FLUTTER\\pr10\\write.txt","w");
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	fprintf(p,"%d ",n);
	
	fclose(p);
	
	
}
