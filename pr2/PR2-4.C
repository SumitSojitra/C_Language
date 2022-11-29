#include<stdio.h>
#include<conio.h>

main()
{
	char day;
	clrscr();

	printf("Enter S for Sunday");
	printf("\nEnter M for Monday");
	printf("\nEnter T for Tuesday");
	printf("\nEnter W for Wednesday");
	printf("\nEnter t for Thusday");
	printf("\nEnter F for Friday");
	printf("\nEnter s for Saturday");

	printf("\n\nEnter your Day : ");
	scanf("%c",&day);

	switch(day)
	{
		case 'S':
			printf("Sunday");
			break;
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thusday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		default :
			printf("Invalid day");

	}

	getch();
}