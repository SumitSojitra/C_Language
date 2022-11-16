#include<stdio.h>

struct employe {

	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	float exp;
	char company_name[100];

};


void main(){
	
	int n,i;
	
	printf("Enter how many Employe : ");
	scanf("%d",&n);
	
	struct employe s[n];
	
	for(i=0; i<n; i++){
		
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("Enter id : ");
		scanf("%d",&s[i].id);
		printf("Enter name : ");
		scanf("%s",&s[i].name);
		printf("Enter age : ");
		scanf("%d",&s[i].age);
		printf("Enter role : ");
		scanf("%s",&s[i].role);
		printf("Enter city : ");
		scanf("%s",&s[i].city);
		printf("Enter Experience : ");
		scanf("%f",&s[i].exp);
		printf("Enter company name : ");
		scanf("%s",&s[i].company_name);
	}
	
	system("cls");
	printf("\nID\tName\tAge\tRole\tCity\texp\tcompany_name\n------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0; i<n; i++){
		
		printf("%d\t%s\t%d\t%s\t%s\t%.2f\t%s\n",s[i].id,s[i].name,s[i].age,s[i].role,s[i].city,s[i].exp,s[i].company_name);
		
	}
		
}
