/* wap to find the sum of first and last digit*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int n, first, last, sum;

    clrscr();

    printf("Enter any 3  value of the positive: ");
    scanf("%d", &n);

    last = n % 10;
    first = n / 100;

    sum = first + last;

    printf("Sum of first and last digit = %d", sum);

    getch();
}