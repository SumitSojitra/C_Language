#include<stdio.h>

void main(){
	
	FILE *p1,*p2;
	
	p1 = fopen("E:\\FLUTTER\\extra\\vovels.txt","w");
	p2 = fopen("E:\\FLUTTER\\extra\\cons.txt","w");
	
	char n[50],i;
	
	printf("Enter string : ");
	scanf("%[^\n]",&n);
	
	for(i=0; i<strlen(n); i++){
		if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o'|| n[i]=='u'|| n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O'|| n[i]=='U'){
			fprintf(p1,"%c ",n[i]);
		}
		else{
			fprintf(p2,"%c ",n[i]);
		}
	}	
	
	fclose(p1);
	fclose(p2);	
	
}
