#include<stdio.h>
#include<conio.h>

/*
	Ternory operator :
		- an expression which can exchange the choices.
		Syntax:
			(condition) ? TRUE : FALSE ;
		- as if it's an expression, it can be terminated only once.
		- can have only single semi colon.

	Switch case:
		- multi option verifier for single variable.
		- supports only int and char data types.
		- faster responce in comparison of ladder due to
		  same execution time for all possibilities.
		Syntax:

			switch(variable)
			{
				case option1 :
					//statements
					break;
				case option2 :
					//statements
					break;
				.
				.
				case optionN :
					//statements
					break;
				default :
					//statements
					break; 	(optional)
			}

*/

main()
{
	int choice,bill = 0;
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
			printf("You've oerdered Pizza !!\n\n");
			printf("Enter...\n");
			printf("1) Margherita\t\t350\n");
			printf("2) Cheese Burst\t\t550\n");
			printf("3) Red chilly\t\t600\n");
			printf("Enter your choice: ");
			scanf("%d",&choice);

			//nested switch case
			switch(choice)
			{
				case 1:
					printf("You've ordered Margherita !!\n");
					bill = 350;
					break;
				case 2:
					printf("You've ordered Cheese Burst !!\n");
					bill = 550;
					break;
				case 3:
					printf("You've ordered Red Chilly !!\n");
					bill = 600;
					break;
				default :
					printf("This item isn't included in our menu !!\n");
			}

			break;
		case 2:
			printf("You've ordered Burger !!");
			break;
		case 3:
			printf("You've ordered Sandwich !!");
			break;
		default :
			printf("Invalid choice !!");
			break;
	}

	printf("\n==========================\n");
	printf("Bill\t: %d\nVisit Again !!",bill);
	printf("\n==========================\n");

	getch();
}





