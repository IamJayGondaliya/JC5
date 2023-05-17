#include<stdio.h>
#include<conio.h>

/*
	Operators:
		- operators are the symbols which helps to perform
		  mathematical or logical operations on operands.
	Operands :
		- operands can be either value or variable.
		- number of operands decides the type of operator.

	Types of operator :
		- unary		(single operand)
		- binary	(double operands)
		- ternory	(more than two operands)

	Unary:
		- inceremnt	++
			- pre 		++10;	++a;
			- post          10++;	a++;
		- decrement     --
			- pre           --10;	--a;
			- post          10--;	a--;
	Binary:
		- arithmatic operators	=> +, -, *, /, %
		- assignment operators	=> =, +=, -=, *=, /=, %=
		- relational/conditional=> >, >=, <, ,<=, ==, !=
		  operators
		- logical operators	=> &&, ||, !
	Ternory:
		- ternory		=> ?:
			- syntax	=> (condition) ? TRUE : FALSE ;



*/

void main()
{
	int a = 10,b = 6, c;
	clrscr();

	c = 15;

	printf("Answer: %d",c);

	getch();
}