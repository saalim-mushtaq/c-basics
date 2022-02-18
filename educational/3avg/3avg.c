#include<stdio.h>
int main(){
    int a,b,c;
    float d;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("avg of three numbers is %f",d);
    return 0;
}