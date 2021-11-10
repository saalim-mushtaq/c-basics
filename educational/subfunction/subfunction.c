#include<stdio.h>

int sub(int a,int b);

int main(){
    int a=10,b=20;
    int c=sub(10,20);


    printf("subtraction:%d\n",c);
}
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}





