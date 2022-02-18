#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=a%10;
    printf("last digit of number is %d",b);
    return 0;
}