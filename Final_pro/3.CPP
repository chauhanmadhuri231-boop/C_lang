/* wap to print the  dividetion of value*/
#include<stdio.h>
#include<conio.h>

void check(int n)
{
    if(n % 3 == 0 && n % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5", n);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5", n);
    }
}

void main()
{
    int n;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    check(n);

    getch();
}