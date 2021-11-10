#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf(" Enter the number1 = ");
    scanf("%d", &a);
    printf("\n Enter the number2 = ");
    scanf("%d", &b);
    printf("\n Enter the number3 = ");
    scanf("%d", &c);

    if(a>b)
    {
        if(a>c)
        {
            printf("greatest number = %d",a);
        }
        else
        {
            printf("greatest number = %d",c);
        }

    }
    else if (b>c)
    {
        printf("greatest number = %d",b);
    }
    else
    ("greatest number = %d",c);

    return 0;
}