#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	printf("Enter d: ");
	scanf("%d",&d);
	printf("Enter e: ");
	scanf("%d",&e);

	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small\n");
				}
				else
				{
					printf("E is small\n");
				}
			}
		}
	}

	getch();
}







