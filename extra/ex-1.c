#include<stdio.h>
struct emp {
	
    int eid,base_s;
	float hra,dt,ta,gros_s;
    char name[30],edept[30];
    
};


int main() {
	
	FILE *p;
	
	p = fopen("E:\\FLUTTER\\extra\\gross.txt","a");
	
	int n;
	
	printf("Enter number of employee : ");
	scanf("%d",&n);
	
    struct emp s[n];
    int i;

    for(i=0; i<n; i++)
    {
		system("cls");
		printf("Employee %d\n",i+1);
        printf("Enter employee Id no. :");
        scanf("%d", &s[i].eid);
        printf("Enter employee name :");
        scanf("%s",s[i].name);
        printf("Enter employee department :");
        scanf("%s",s[i].edept);
        printf("Enter employee base salary :");
        scanf("%d", &s[i].base_s);
        printf("Enter employee HRA :");
        scanf("%f", &s[i].hra);
        printf("Enter employee DT :");
        scanf("%f", &s[i].dt);
        printf("Enter employee TA :");
        scanf("%f", &s[i].ta);
    }
    
    float hra,dt,ta;
    
    system("cls");
	printf("percentage\n\n");
	for(i=0; i<n; i++){
		float hra=(s[i].base_s*s[i].hra)/100;
	    float dt=(s[i].base_s*s[i].dt)/100;
     	float ta=(s[i].base_s*s[i].ta)/100;
		 s[i].gros_s =s[i].base_s + s[i].hra + s[i].dt + s[i].ta;
	}  

	system("cls");
	fprintf(p,"eid\tname\tdept\tbs\thra\tdt\tta\tgs\n\n");

	for(i=0; i<n; i++){
		fprintf(p,"%d\t%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n",s[i].eid,s[i].name,s[i].edept,s[i].base_s,s[i].hra,s[i].dt,s[i].ta,s[i].gros_s);
	} 

}
