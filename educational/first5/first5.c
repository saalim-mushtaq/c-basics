#include<stdio.h>

int main()
{
    int n,i,sum,r;

    printf("enter n value");
    scanf("%d",&n);

    for(i=1;i<=5;i++)
    {
       r=n%10;
       sum=sum+r;
       n=n/10;
    }
    printf("sum of first %d numbers is %d",n,sum);
    return 0;
}