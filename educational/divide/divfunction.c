#include<stdio.h>

int divide(int a,int b);

int main(){
    int a=72,b=8;
    int c=divide(72,8);
    printf("division: %d",c);

}
int divide(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
