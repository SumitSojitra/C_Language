#include<stdio.h>

void main(){
	
	FILE *even,*odd,*prime;
	int i,n,c=0;
	
	even = fopen("E:\\FLUTTER\\pr10\\even.txt","w");
	odd = fopen("E:\\FLUTTER\\pr10\\odd.txt","w");
	prime = fopen("E:\\FLUTTER\\pr10\\prime.txt","w");	
	
	printf("Enter any Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		if(n%i==0){
			c++;
		}
	}
	if(n%2==0){
		fprintf(even,"even %d ",n);
	}
	else if(c==2){
		fprintf(prime,"prime %d ",n);
	}
	else{
		fprintf(odd,"odd %d ",n);
	}
	
	fclose(even);
	fclose(odd);
	fclose(prime);
		
}
