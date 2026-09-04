//Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

#include <stdio.h>

int main()
{
    int i, j;

    // Upper part
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    // Middle part
    for (i = 1; i <= 5; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Lower part
    for (i = 3; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
