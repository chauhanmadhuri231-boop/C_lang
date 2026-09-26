/* wap to print the multiplication of array*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5], b[5], sum[5];
    int i;
    int *p, *q, *r;

    clrscr();

    printf("Enter elements of first array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &b[i]);
    }

    p = a;
    q = b;
    r = sum;

    for(i=0; i<5; i++)
    {
	*(r+i) = *(p+i) + *(q+i);
    }

    printf("Sum of two arrays:\n");

    for(i=0; i<5; i++)
    {
        printf("%d ", *(r+i));
    }

    getch();
}