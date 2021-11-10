#include<stdio.h>

int main()
{
    int n;

    printf("enter any number");

    scanf("%d",&n);

    if(n%12==0)
    {
        printf("number is divisible by 12");


    }
    else
    {
        printf("number is not divisible by 12");
    }
    return 0;
}