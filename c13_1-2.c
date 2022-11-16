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
	
	struct employe e[n];
	
	for(i=0; i<n; i++){
		
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("Enter id : ");
		scanf("%d",&e[i].id);
		printf("Enter name : ");
		scanf("%s",&e[i].name);
		printf("Enter age : ");
		scanf("%d",&e[i].age);
		printf("Enter role : ");
		scanf("%s",&e[i].role);
		printf("Enter city : ");
		scanf("%s",&e[i].city);
		printf("Enter Experience : ");
		scanf("%f",&e[i].exp);
		printf("Enter company name : ");
		scanf("%s",&e[i].company_name);
	}
	
	system("cls");
	printf("\nID\tName\tAge\tRole\tCity\texp\tcompany_name\n------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0; i<n; i++){
		
		printf("%d\t%s\t%d\t%s\t%s\t%.2f\t%s\n",e[i].id,e[i].name,e[i].age,e[i].role,e[i].city,e[i].exp,e[i].company_name);
		
	}
		
}
