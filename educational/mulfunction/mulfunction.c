#include<stdio.h>

int multiply(int a,int b);

int main(){
    int a=76,b=7;
    int c=multiply(76,7);
    printf("multiplication: %d",c);
}

int multiply(int a,int b)
{
    int c;
    c=a*b;
    return c;
}











