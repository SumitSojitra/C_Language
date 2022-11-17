#include<stdio.h>

struct distans{
	int inch;
	int feet;
};

void main(){
	
	struct distans d1,d2,d3;
	
	printf("Enter Distance 1 inch : ");
	scanf("%d",&d1.inch);
	printf("Enter Distance 1 feet : ");
	scanf("%d",&d1.feet);
	
	
	printf("\nEnter Distance 2 inch : ");
	scanf("%d",&d2.inch);
	printf("Enter Distance 2 feet : ");
	scanf("%d",&d2.feet);
	
	d3.inch=d1.inch+d2.inch;
	d3.feet=d1.feet+d2.feet;
	
	while(d3.inch>=12){
		
		d3.inch-=12;
		d3.feet+=1;
	}
	
	printf("inch : %d\nfeet : %d\n",d3.inch,d3.feet);
	
}
