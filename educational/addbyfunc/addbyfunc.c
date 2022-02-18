#include<stdio.h>
int add(int a,int b);  //function decleration

int main(){
    int a=10,b=20;
    int c=add(10,20);  //function call
    int d=add(20,30);
    int e=add(30,40);
    printf("addition:%d\n",c);
    printf("addition:%d\n",d);
    printf("addition:%d\n",e);
    return 0;

}
int add(int a,int b)  //function definition
{
    int c;
    c=a+b;
    return c;
}
