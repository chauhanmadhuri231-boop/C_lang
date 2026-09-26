/* wap to print the pertten*/
#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int i, j;

    for(i=0; i<5; i++)
    {
	for(j=0; j<i; j++)
	{
	    printf("  ");
	}

	for(j=10-i; j>=6; j--)
	{
	    printf("%d ", j);
	}

	printf("\n");
    }

    getch();
}