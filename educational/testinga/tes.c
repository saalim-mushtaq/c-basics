#include<stdio.h>

int main()
{
    int a[10];
    int i;

    for(i=0;i<=9;i++)
    {
        printf("enter the number");
        scanf(" %d ",&a[i]);
    }
    for(i=0;i<=9;i++){
    printf(" %d ",a[i]);
    }
    return 0;
}