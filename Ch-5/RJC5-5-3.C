#include<stdio.h>
#include<conio.h>

main()
{
	int choice,bill = 0,qty = 1;
	clrscr();

	tmp:
	clrscr();

	printf("Enter...\n");
	printf("1) Pizza\n");
	printf("2) Burger\n");
	printf("3) Sandwich\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("You've selected Pizza\n\n");
			printf("Enter...\n");
			printf("1) Margherita\t\t350\n");
			printf("2) Cheese Burst\t\t550\n");
			printf("3) Thin Crust\t\t400\n");
			printf("Enter your choice\t: ");
			scanf("%d",&choice);
			printf("Enter quantity\t\t: ");
			scanf("%d",&qty);

			clrscr();

			switch(choice)
			{
				case 1:
					printf("You've ordered %d Margherita\n",qty);
					bill += 350 * qty;

					printf("\nEnter...\n");
					printf("1 for order more\n");
					printf("Any key to get bill\n");
					printf("Enter your choice: ");
					scanf("%d",&choice);

					if(choice == 1) {
						//Jumping statement
						goto tmp;
					}

					break;
				case 2:
					printf("You've ordered %d Cheese Burst\n",qty);
					bill += 550 * qty;

					printf("\nEnter...\n");
					printf("1 for order more\n");
					printf("Any key to get bill\n");
					printf("Enter your choice: ");
					scanf("%d",&choice);

					if(choice == 1) {
						//Jumping statement
						goto tmp;
					}
					break;
				case 3:
					printf("You've ordered %d Thin Curst\n",qty);
					bill += 400 * qty;

					printf("\nEnter...\n");
					printf("1 for order more\n");
					printf("Any key to get bill\n");
					printf("Enter your choice: ");
					scanf("%d",&choice);

					if(choice == 1) {
						//Jumping statement
						goto tmp;
					}
					break;
			}

			break;
	}

	printf("\n\n=====================\n");
	printf("Bill\t: %d\n",bill);
	printf("=====================\n");

	getch();
}