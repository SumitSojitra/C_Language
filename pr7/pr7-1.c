#include<stdio.h>

int fact(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

void main(){
	
	 int ans=fact(5);
	
	printf("Factorial Number : %d",ans);
	
}
