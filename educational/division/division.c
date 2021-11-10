#include<stdio.h>
void main()
{
    printf("enter the first number\n");
    int a;
    scanf("%d",&a);
    printf("enter the second number\n");
    int b;
    scanf("%d",&b);
    int c;
    c=a/b;
    printf("the value of %d / %d is %d",a,b,c);
    printf("the values of %d / %d is %d",a,b,a/b);
}