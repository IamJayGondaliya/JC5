#include<stdio.h>
#include<conio.h>

/*
	Operator Precedence: (Priority)

	BODmas	:

		Brackets		()
		Operator		%
		Division/Multiplication	/ *	(LTR)
		addition/subtraction	+ -	(LTR)
		equels to		=	(RTL)

	(a+b)^2	=> a^2 + b^2 + 2ab
		=> (a*a) + (b*b) + (2*a*b)

	 Type conversation :
		- implicit	(directly)
			- int 	=> char
			- char 	=> int
			- float => int
		- explicit	(forcefully)
			- int 	=> float

	 ASCII
		A-Z	=> 65 - 90
		a-z	=> 97 - 122
		0-9	=> 48 - 57
*/

main()
{
	char a = 'E';
	int b = 72;
	clrscr();

	printf("Answer: %c",b);

	getch();
}


