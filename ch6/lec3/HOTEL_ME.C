#include<stdio.h>
#include<conio.h>

main()
{
	int choice,bill=0;
	clrscr();

	menu:
	printf("\nEnter 1 for dhosa\n");
	printf("Enter 2 for pizza\n");
	printf("Enter 3 for cold-drinks\n");
	printf("Enter 4 for ice-cream\n");
	printf("Enter Your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 :
			printf("\nEnter 1 for masala dhosa..\tRs 150\n");
			printf("Enter 2 for chees dhosa..\tRs 200\n");
			printf("Enter 3 for paneer surma..\tRs 170\n");
			printf("Enter 4 for oats dhosa..\tRs 140\n");
			printf("Enter your choice : ");
			scanf("%d",&choice);
			clrscr();

			switch(choice)
			{
				case 1 :
					printf("\nYou Ordered masala dhosa..");
					bill += 150;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				case 2 :
					printf("\nYou Ordered chees dhosa..");
					bill += 200;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				case 3 :
					printf("\nYou Ordered paneer surma..");
					bill += 170;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				case 4 :
					printf("\nYou Ordered oats dhosa..");
					bill += 140;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				default :
					printf("Invalid order");
			}
			break;

		case 2 :
			printf("\nEnter 1 for Peppy Paneer..\t\tRs 150");
			printf("\nEnter 2 for Mexican Green Wave..\tRs 250");
			printf("\nEnter 3 for Spinach pizza..\t\tRs 140");
			printf("\nEnter 4 for Delux vaggie pizza..\tRs 270");
			printf("\nEnter your choice : ");
			scanf("%d",&choice);
			clrscr();

			switch(choice)
			{
				case 1 :
					printf("\nYou Orderd Peppy Paneer..");
					bill += 150;

					printf("\n\nEnter 1 for more order");
					printf("\nEnter 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				case 2 :
					printf("\nYou Orderd Mexican Green Wave..");
					bill += 250;

					printf("\n\nEnter 1 for more order");
					printf("\nEnter 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				case 3 :
					printf("\nYou Orderd Spinach pizza..");
					bill += 140;

					printf("\n\nEnter 1 for more order");
					printf("\nEnter 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				case 4 :
					printf("\nYou Ordered Delux veggie pizza..");
					bill += 270;

					printf("\n\nEnter 1 for more order");
					printf("\nEnter 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;
				default :
					printf("Invalid order.");
			}
			break;;

		case 3 :
			printf("\nEnter 1 for Thumps up\tRs 30");
			printf("\nEnter 2 for HELL\tRs 70");
			printf("\nEnter 3 for Sprite\tRs 35");
			printf("\nEnter 4 for Sting\tRs 25");
			printf("\nEnter your choice : ");
			scanf("%d",&choice);
			clrscr();

			switch(choice)
			{
				case 1 :
					printf("\nYou ordered Thumps up");
					bill += 30;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				case 2 :
					printf("\nYou ordered HELL");
					bill += 70;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				case 3 :
					printf("\nYou ordered Sprite");
					bill += 35;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				case 4 :
					printf("\nYou ordered Sting");
					bill += 25;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);
					if(choice==1)
					{
						goto menu;
					}
					break;

				default :
					printf("\nInvalid order.");
			}
			break;

		case 4 :
			printf("\nEnter 1 for chocolate ice-cream\t\tRs 270");
			printf("\nEnter 2 for strawberry ice-cream\tRs 360");
			printf("\nEnter 3 for truffle ice-cream\t\tRs 350");
			printf("\nEnter 4 for black diamond\t\tRs 999");
			printf("\nEnter your choice : ");
			scanf("%d",&choice);
			clrscr();

			switch(choice)
			{
				case 1:
					printf("\nYou ordered chocolate ice-cream");
					bill += 270;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;
				case 2 :
					printf("\nYou ordered strawberry ice-cream");
					bill += 360;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				case 3 :
					printf("\nYou ordered truffle ice-cream");
					bill += 350;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				case 4 :
					printf("\nYou ordered black diamond");
					bill += 999;

					printf("\n\npress 1 for more order");
					printf("\npress 0 for bill");
					printf("\nEnter your choice : ");
					scanf("%d",&choice);

					if(choice==1)
					{
						goto menu;
					}
					break;

				default :
					printf("\n\nInvalid order.");
			}

			break;
		default :
			printf("Invalide choice.");

	}

	printf("\n\nYour Bill is Rs%d",bill);

	getch();
}