#include<stdio.h>
#include<conio.h>

/*
	condition :
		relational/conditional operators :
			>, >=, <, <=, ==, !=
		logical operator
			&&, ||, !

	Conditional statement :

	if(condition)
	{
		//TRUE
		//Statements
	}
	else
	{
		//False
		//Statements
	}

	A-Z	=> 65-90
	a-z	=> 97-122

	Ladder	(if..else if..else)

	if(condition1)
	{
		//TRUE
		//Statements
	}
	else if(condition2)
	{
		//TRUE
		//Statements
	}
	.
	.
	else if(conditionN)
	{
		//TRUE
		//Statement
	}
	else
	{
		//FALE
		//Statements
	}


*/

main()
{
	char a;
	clrscr();

	printf("Enter any character: ");
	scanf("%c",&a);
//WAP to check given character is UPPERCASE,lowercase, digits or symbols
	if(a>='A' && a<='Z')
	{
		printf("UPPER\n");
	}
	else if(a>='a' && a<='z')
	{
		printf("lower\n");
	}
	else if(a>='0' && a<='9')
	{
		printf("Digits\n");
	}
	else
	{
		printf("Special characters\n");
	}

	getch();
}