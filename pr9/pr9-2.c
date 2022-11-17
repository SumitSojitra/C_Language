#include<stdio.h>

union marks{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
};

void main(){
	
	int i;
	union marks m[5];
	
	for(i=1; i<=5; i++){
		system("cls");
		printf("student %d / 5\n",i);
		printf("Enter Roll no : ");
		scanf("%d",&m[i].roll_no);
		printf("Enter Name : ");
		scanf("%s",&m[i].name);
		printf("Enter Chem marks : ");
		scanf("%d",&m[i].chem_marks);
		printf("Enter Maths marks : ");
		scanf("%d",&m[i].maths_marks);
		printf("Enter phy marks : ");
		scanf("%d",&m[i].phy_marks);
	}
	
	for(i=1; i<=5; i++){
		float per=(m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/300.0*100;
		system("cls");
		printf("Percentage : %.2f\n",per);
	}
	
}
