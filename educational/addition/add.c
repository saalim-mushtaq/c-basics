#include<stdio.h>
int main()
{
    printf("enter the first number");
    int a;
    scanf("%d",&a);
    printf("enter the second number");
    int b;
    scanf("%d",&b);
    int c;
    c=a+b;
    printf("the value of %d + %d is %d",a,b,c);
    return 0;
}