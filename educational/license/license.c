#include<stdio.h>

int main()
{
    int age;

    printf("enter the age");

    scanf("%d",&age);

    if(age>=18)
    {
        printf("eligible for license");
    }
    else
    {
        printf("not eligible");
    }
}