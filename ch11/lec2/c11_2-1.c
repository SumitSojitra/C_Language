#include<stdio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int multi(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}

void main(){
	int n,choice,a,b,ans;
	
	do
	{
		printf("Enter 1 for addition\n");
		printf("Enter 2 for substraction\n");
		printf("Enter 3 for multiplication\n");
		printf("Enter 4 for division\n");
		printf("Enter 5 for Exit\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 : 
					printf("Enter A : ");
					scanf("%d",&a);
					printf("Enter B : ");
					scanf("%d",&b);
					
					ans=add(a,b);
					printf("Answer : %d\n\n",ans);
					break;
			case 2 : 
					printf("Enter A : ");
					scanf("%d",&a);
					printf("Enter B : ");
					scanf("%d",&b);
					
					ans=sub(a,b);
					printf("Answer : %d\n\n",ans);
					break;
			case 3 : 
					printf("Enter A : ");
					scanf("%d",&a);
					printf("Enter B : ");
					scanf("%d",&b);
					
					ans=multi(a,b);
					printf("Answer : %d\n\n",ans);
					break;
			case 4 : 
					printf("Enter A : ");
					scanf("%d",&a);
					printf("Enter B : ");
					scanf("%d",&b);
					
					ans=div(a,b);
					printf("Answer : %d\n\n",ans);
					break;
			case 5 : 
					break;
		}
	}while(choice!=5);
}
