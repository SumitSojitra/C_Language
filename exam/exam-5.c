#include<stdio.h>

struct emp{
	int id;
	char name[100];
	char add[100];
	char email[100];
	int  salary;
	char role[100];
	int age;
	
};
void main(){
	
	int n,i;
	printf("Enter your employe number :");
	scanf("%d",&n);
	
	struct emp e[n];
	
	for(i=0; i<n; i++)
	{
		system("cls");
		printf("Enter Employe id : ");
		scanf("%d",&e[i].id);
		printf("Enter Employe Name : ");
		scanf("%s",&e[i].name);
		printf("Enter Employe Address: ");
		scanf("%s",&e[i].add);
		printf("Enter Employe Email Name : ");
		scanf("%s",&e[i].email);
		printf("Enter Employe Salary : ");
		scanf("%d",&e[i].salary);
		printf("Enter Employe Role : ");
		scanf("%s",&e[i].role);
		printf("Enter Employe Age : ");
		scanf("%d",&e[i].age);
	}
	system("cls");
	printf("id\tname\trole\tadd\tsalary\tage\temail\n------- ------- ------- ------- ------- ------- -------\n");
	
	for (i=0;i<n;i++){
		printf("%d\t%s\t%s\t%s\t%d\t%d\t%s\n",e[i].id,e[i].name,e[i].role,e[i].add,e[i].salary,e[i].age,e[i].email);
	}
}
