#include<stdio.h>
#include<conio.h>

void cube(int *p, int n)
{
    int i;

    for(i=0; i<n*n; i++)
    {
        printf("%d ", (*p) * (*p) * (*p));
        p++;
        
        if((i+1) % n == 0)
            printf("\n");
    }
}

void main()
{
    int a[10][10], n, i, j;

    clrscr();

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("\nEnter array elements:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCubes of all elements:\n");

    cube(&a[0][0], n);

    getch();
}