#include<stdio.h>

struct student {

	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];

};

void main(){
	
	int n,i;
	
	printf("Enter how many student : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0; i<n; i++){
		
		system("cls");
		printf("\n%d / %d\n",i+1,n);
		
		printf("Enter id : ");
		scanf("%d",&s[i].id);
		printf("Enter name : ");
		scanf("%s",&s[i].name);
		printf("Enter age : ");
		scanf("%d",&s[i].age);
		printf("Enter course : ");
		scanf("%s",&s[i].course);
		printf("Enter city : ");
		scanf("%s",&s[i].city);
		printf("Enter std : ");
		scanf("%d",&s[i].std);
		printf("Enter school : ");
		scanf("%s",&s[i].school);
	}
	
	system("cls");
	printf("\nID\tName\tAge\tCourse\tCity\tStd\tSchool\n------- ------- ------- ------- ------- ------- -------\n");
	
	for(i=0; i<n; i++){
		
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
		
	}
		
}
