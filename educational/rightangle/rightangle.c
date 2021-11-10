#include <stdio.h>

void displayTriangle(int length)
{
    int i, j;
    for (i = 1; i <= length; i++) //rows
    {
        for (j = 1; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    displayRightTriangle(10);
    return 0;
}