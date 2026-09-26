/* wap to print all string skip the vowel */
#include<stdio.h>
#include<conio.h>

void countConsonants(char str[])
{
    int i, j, count;

    for(i='a'; i<='z'; i++)
    {
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
        {
            continue;
        }

        count = 0;

        for(j=0; str[j]!='\0'; j++)
        {
            if(str[j]==i)
            {
                count++;
            }
        }

        if(count>0)
        {
            printf("%c = %d\n", i, count);
        }
    }
}

void main()
{
    char str[100];

    clrscr();

    printf("Enter a sentence: ");
    gets(str);

    countConsonants(str);

    getch();
}